#include <stdio.h>
#include <string.h>

#define MAX 20

int main() {
    int vertices, edges;
    int i, j, u, v;
    char names[MAX][20];  // Array to store vertex names
    int adjMatrix[MAX][MAX];
    clrscr();
    printf("Enter number of vertices: ");
    scanf("%d", &vertices);

    printf("Enter name of each vertex:\n");
    for (i = 0; i < vertices; i++) {
	printf("Vertex %d name: ", i);
	scanf("%s", names[i]);
    }

    // Initialize adjacency matrix to 0
    for (i = 0; i < vertices; i++) {
	for (j = 0; j < vertices; j++) {
	    adjMatrix[i][j] = 0;
	}
    }

    printf("Enter number of edges: ");
    scanf("%d", &edges);

    printf("Enter edges (format: vertex1_index vertex2_index):\n");
    for (i = 0; i < edges; i++) {
	printf("\n\tEnter %d Edge(u,v) =>",i);
	scanf("%d %d", &u, &v);
	adjMatrix[u][v] = 1;
      //	adjMatrix[v][u] = 1;  // Since the graph is undirected
    }


    // Print the adjacency matrix with vertex names
    printf("\nAdjacency Matrix:\n      ");
    for (i = 0; i < vertices; i++) {
	printf("%-5s", names[i]);
    }
    printf("\n");

    for (i = 0; i < vertices; i++) {
	printf("%-5s", names[i]);
	for (j = 0; j < vertices; j++) {
	    printf("%-5d", adjMatrix[i][j]);
	}
	printf("\n");
    }
	getch();
    return 0;
}
