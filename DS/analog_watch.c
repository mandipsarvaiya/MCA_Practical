#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h> // for sleep

#define PI 3.14159265358979323846
#define WIDTH 40
#define HEIGHT 20
#define CENTER_X (WIDTH / 2)
#define CENTER_Y (HEIGHT / 2)
#define RADIUS (HEIGHT / 2 - 2)

// Function to clear the screen
void clear_screen() {
    printf("\033[H\033[J");
}

// Function to draw the clock face
void draw_clock(int hour, int min, int sec) {
    char buffer[HEIGHT][WIDTH + 1];

    // Initialize buffer with spaces
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            buffer[y][x] = ' ';
        }
        buffer[y][WIDTH] = '\0';
    }

    // Draw the clock circle
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            double dx = (x - CENTER_X) / 2.0; // Adjust for aspect ratio
            double dy = (y - CENTER_Y);
            double dist = sqrt(dx * dx + dy * dy);
            
            if (fabs(dist - RADIUS) < 0.5) {
                buffer[y][x] = '*';
            }
            
            // Mark center
            if (x == CENTER_X && y == CENTER_Y) {
                buffer[y][x] = 'O';
            }
        }
    }
    
    // Draw numbers (12, 3, 6, 9)
    buffer[CENTER_Y - RADIUS + 1][CENTER_X] = '1'; 
    buffer[CENTER_Y - RADIUS + 1][CENTER_X+1] = '2';
    
    buffer[CENTER_Y + RADIUS - 1][CENTER_X] = '6';
    
    buffer[CENTER_Y][CENTER_X + (int)(RADIUS * 2) - 2] = '3';
    buffer[CENTER_Y][CENTER_X - (int)(RADIUS * 2) + 2] = '9';


    // Calculate angles
    // 12 o'clock is -PI/2 in standard trig (0 is 3 o'clock)
    // But screen coordinates: y increases downwards.
    // So 12 o'clock is (0, -1) direction.
    // Angle in radians:
    // Hour: (hour % 12 + min/60) * (2*PI / 12) - PI/2
    // Minute: (min + sec/60) * (2*PI / 60) - PI/2
    // Second: sec * (2*PI / 60) - PI/2
    
    double h_angle = ((hour % 12) + min / 60.0) * (PI / 6.0) - (PI / 2.0);
    double m_angle = (min + sec / 60.0) * (PI / 30.0) - (PI / 2.0);
    double s_angle = sec * (PI / 30.0) - (PI / 2.0);

    // Draw hands
    // Hour hand (shortest)
    int h_len = RADIUS * 0.5;
    for (int r = 0; r < h_len; r++) {
        int x = CENTER_X + (int)(r * cos(h_angle) * 2.0);
        int y = CENTER_Y + (int)(r * sin(h_angle));
        if (x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT) buffer[y][x] = 'H';
    }

    // Minute hand (medium)
    int m_len = RADIUS * 0.75;
    for (int r = 0; r < m_len; r++) {
        int x = CENTER_X + (int)(r * cos(m_angle) * 2.0);
        int y = CENTER_Y + (int)(r * sin(m_angle));
        if (x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT) buffer[y][x] = 'm';
    }

    // Second hand (longest)
    int s_len = RADIUS * 0.9;
    for (int r = 0; r < s_len; r++) {
        int x = CENTER_X + (int)(r * cos(s_angle) * 2.0);
        int y = CENTER_Y + (int)(r * sin(s_angle));
        if (x >= 0 && x < WIDTH && y >= 0 && y < HEIGHT) buffer[y][x] = '.';
    }
    
    // Print buffer
    clear_screen();
    printf("Analog Watch (Time Zone Offset Applied)\n");
    printf("Time: %02d:%02d:%02d\n", hour, min, sec);
    for (int y = 0; y < HEIGHT; y++) {
        printf("%s\n", buffer[y]);
    }
}

int main() {
    float offset_hours;
    printf("Enter time zone offset from UTC (e.g., 5.5 for IST, -4 for EST): ");
    scanf("%f", &offset_hours);

    int offset_sec = (int)(offset_hours * 3600);

    while (1) {
        time_t rawtime;
        struct tm * ptm;

        time(&rawtime);
        
        // Add offset to current UTC time
        // Note: gmtime returns pointer to statically allocated struct, 
        // but we need to modify it or create a new time_t.
        // Easiest is to add offset to rawtime (which is seconds since epoch).
        // However, rawtime is usually UTC. localtime() converts to local time.
        // gmtime() converts to UTC struct tm.
        
        // Let's get UTC time first
        ptm = gmtime(&rawtime);
        
        // We can't just add seconds to rawtime because rawtime is absolute.
        // We want to display (UTC + offset).
        // So we can take rawtime, add offset_sec, and then use gmtime on that new value
        // to get the broken-down time structure as if it were that time in UTC.
        
        time_t local_rawtime = rawtime + offset_sec;
        struct tm * local_tm = gmtime(&local_rawtime);

        if (local_tm) {
            draw_clock(local_tm->tm_hour, local_tm->tm_min, local_tm->tm_sec);
        }

        sleep(1);
    }

    return 0;
}
