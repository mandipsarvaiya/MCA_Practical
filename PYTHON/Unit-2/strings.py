"""

--------------------12. Print multiple lines using single print statement

print("I like \"python programming\" very much\n its my fav subject")


--------------------13. Print a part of the above string “very much” using the slice operator.

str = "I like \"python programming\" very much\n its my fav subject"
print(str[str.index("v"):str.rindex("h")+1])


--------------------14. Print the last 5 characters from the above given string

str = "I like \"python programming\" very much\n its my fav subject"
print(str[len(str)-5 : len(str)+1])


--------------------15. Print only the second line of the given string

str = "I like \"python programming\" very much\n its my fav subject"
splitedStr = str.split("\n")
print(splitedStr[1])


--------------------16. Take two strings as input from the user and concatenate them.

str1 = input("Enter String 1")
str2 = input("Enter String 2")
print(str1 + str2)


--------------------17. Take a number and a string from the user and repeat the string for that many times.

num = int(input("Enter number"))
str = input("Enter string")

print(str*num)


--------------------18. Take an input character from the user and check whether that character is present in the above given string or not. Using in operator and using not in operator

str = "I like \"python programming\" very much\n its my fav subject"
ch = input("Enter charector")

if(ch in str):
    print("number is exist")


-------------------- 19. Create a menu driven program for string manipulation
a. Find the length of a string
b. Print the string in upper case
c. Print the string in lower case
d. Print the string with initial capital
e. Split the string based on the character entered.


str = "I like \"python programming\" very much\n its my fav subject"

ch = int(input("1.find length of string\n2. string in upper case\n3. string in lower case\n4. print string with initial capital\n5. splite the string based on the charecter\nEnter choice = "))

match ch:
    case 1: 
        print(len(str))
    case 2:
        print(str.upper())
    case 3:
        print(str.lower())
    case 4: 
        print(str.capitalize())
    case 5:
        print(str.split(" "))
    case _:
        print("invalid")

--------------------20. Take two strings as input s1 and s2 and check whether s2 is present in s1 or not.

s1 = input("Enter string s1")
s2 = input("Enter string s2")

if(s2 in s1):
    print("s2 is present in s1")
else:
    print("s2 is not present in s1")


--------------------21. If s2 is a part of s1 then print the 1st and last occurrences of it

s1 = input("Enter string s1 = ")
s2 = input("Enter string s2 = ")

if(s2 in s1):
    fpos = s1.index(s2)
    lpos = s1.rindex(s2)
    print("first occureance of s2 in s1 at " + str(fpos))
    print("last occureance of s2 in s1 at " + str(lpos))
else:
    print("s2 is not present in s1")


--------------------22. If s2 is present in s1 then also count number of times it occurs in s1.

s1 = input("Enter string s1 = ")
s2 = input("Enter string s2 = ")

if(s2 in s1):
    print(s1.count(s2))
else:
    print("s2 is not present in s1")


--------------------23. Count total number of words in the string input by user

s1 = input("Enter string s1 = ")
print("total word inside string is",len(s1.split(" ")))


--------------------24. Take a string input from user and print it in reverse using range

s1 = input("Enter string s1 = ")
print(s1[::-1])

"""