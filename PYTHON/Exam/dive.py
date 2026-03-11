# Q1 – Unique Signup Simulation
# Write a Python function based, user friendly program that:
# • Creates user login with username & password and store it in a text file
# • Allows user to choose a unique userID that is already not available in the text file.
# • If login ID is successfully selected → Display welcome message
# • While taking password, give retype password option also. And if both the passwords are equal than and then only sign up.

def login():
    username = str(input("Enter username: "))
    password = str(input("Enter password: "))
    f = open("/Users/renilgarala/Coding/MCA/SEM-2/PYTHON/Files/first.txt", "r")
    for line in f:
        s_username = line.split(" ")[0].strip()
        s_password = line.split(" ")[1].strip()
        print(s_password, s_username)
        if s_username == username and s_password == password:
            print(f"\nWelcome Back")
            return

    print("\nInvalid Username or Password!")

login()


def is_exist(username):
    f = open("/Users/renilgarala/Coding/MCA/SEM-2/PYTHON/Files/first.txt", "r")
    for line in f:
        stored_username = line.split(" ")[0].strip()
        if stored_username == username:
            return True
    return False

def register():
    while True:
        username = input("enter unique username: ")
        if is_exist(username):
            print("username already exists\n")
        else:
            break
    
    i=0
    while i>3:
        password = input("Entre password")
        re_pass = input("Re Enter Password")
        if(re_pass != password):
            print("pass and repass is not same")
        else:
            break
        i=i+1
        
    f = open("/Users/renilgarala/Coding/MCA/SEM-2/PYTHON/Files/first.txt", "a")
    f.write(username + " " + password + "\n")
    print("user register successfully")

register()




# Q2 – Guess the 4 letter word
# Develop a user friendly, function based program that:
# • Accepts a four character word from the user. OR can take random characters from the list of alphabets
# [Hint: import random
# character_list = ['a', 'b', 'c', 'd', 'e', 'f', 'g',……….]
# random_char = random.choice(character_list)]
# • Prints “Success” or “Try Again” based on the word is available in the file or not.
# • Give three chance to guess the word from the file.


