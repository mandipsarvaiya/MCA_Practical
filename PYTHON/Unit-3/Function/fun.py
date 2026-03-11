from functools import reduce

"""

P1 > Take user input and create a menu driven program to perform mathematical operations like addition, subtraction, multiplication, division, integer division, power. Return values from the functions

def add(a, b):
    return a + b
def subtract(a, b):
    return a - b
def multiply(a, b):
    return a * b
def divide(a, b):
    return a / b

while(True):
    print("Menu:")
    print("1. Addition")
    print("2. Subtraction")  
    print("3. Multiplication")
    print("4. Division")
    print("5. Exit")
    choice = int(input("Enter your choice: "))

    if choice == 5:
        print("Exiting the program.")
        break
    num1 = float(input("Enter first number: "))
    num2 = float(input("Enter second number: "))
    if choice == 1:
        print("Result:", add(num1, num2))
    elif choice == 2:
        print("Result:", subtract(num1 - num2))
    elif choice == 3:
        print("Result:", multiply(num1 * num2))
    elif choice == 4:
        print("Result:", divide(num1 / num2))
    else:
        print("Invalid choice")

P2 > Create functions to calculate 
Area of a rectangle = width * length
Area of a triangle = ½ * Height * Base
Area of a circle = pi*r*r

def area_rectangle(width, length):
    return width * length
def area_triangle(height, base):
    return 0.5 * height * base
def area_circle(radius):
    pi = 3.14159
    return pi * radius * radius

area_rectangle(5, 10) 
area_triangle(5, 10)
area_circle(7)

P3 > Create functions to convert decimal numbers to binary, octal and hexadecimal numbers. Always return values from the functions

def binary(dec):
    return bin(dec)

def octal(dec):
    return oct(dec)

def hexadecimal(dec):
    return hex(dec)

print(binary(20))
print(oct(20))
print(hex(20))

P4 > Write an UDF to return a list having only unique values by removing duplicate values from the provided input list.
Eg. Sample List : [1,2,3,3,3,3,4,5]
Unique List : [1, 2, 3, 4, 5]

def removeDuplicate(l1):
    tempTuple=set(l1)
    print(list(tempTuple))

removeDuplicate([1,2,3,3])

P5 > Write a Python function to multiply all the numbers in a list.

from functools import reduce
def multiplyList(l1):
    print(reduce(lambda x,y : x*y, l1))

multiplyList({1,2,6,8,5})

P6 > Write a UDF to check the inputted number is between specified range or not. 

def isBetween(num):
    if num > 10 and num < 100:
        print("inputted number is between range")
    else:
        print("inputted number is not between range")

num = int(input("Enter number = "))
isBetween(num)

P7 > Write a function to calculate total number of Uppercase and lowercase characters in the string.

def calLatter(str):
    upper = 0
    lower = 0
    for i in str:
        if i.isupper():
            upper=upper+1
        else:
            lower=lower+1
    print("upper is = ", upper)
    print("lower is = ", lower)

calLatter("RenilGarala")

P8 > Write an UDF to check if the user given number is a prime number or not

def isPrime(num):
    flag = 0
    for i in range(2,num):
        if(num%i==0):
            flag=1
            break
        
    if(flag==1):
        print("nmumber is not prime")
    else:
        print("number is prime")

isPrime(7)


P9 > Write a findString() function to find all the positions of occurrences of string2 in string1 and return that value. If string2 is not present in string1 then display suitable message.
Eg. Str1 = Hello all, Good Morning to all. (pass it as a parameter in the function)
       Str2 = all (pass it as a parameter, but f not passed take a default argument)
O/p: String 2 found at positions: [6, 27]


P13 > Create a lambda function that will return maximum of two numbers

a=10
b=20
s = (lambda a, b: a if a > b else b)(a, b)
print(s)


P14> Create a lambda function that will return maximum of three numbers

a=10
b=20
c=30
s = (lambda a,b,c: a if a>b and a>c else (b if b > c else c))(a,b,c)
print(s)

P15> Write a lambda function that takes one number and if the number is even, returns that number multiplied by 5 else if the number is odd, returns that number multiplied by 10

s = (lambda x: x*5 if x%2==0 else x*10)(9)
print(s)

---------------P16> Take a list of mixed elements and 
Write a lambda function to separate integer elements as an output list. 
Write another lambda function to separate string elements as an output list.

l1 = [10,"renil", 20.3, "rohit"]
l2 = lambda x: [x for x in l1 if type(x)==int]
print(l2(l1))

l1 = [10,"renil", 20.3, "rohit"]
l2 = lambda x: [x for x in l1 if type(x)==str]
print(l2(l1))

---------------P17> Modify the above program using filter()

l1 = [10,"renil", 20.3, "rohit"]
l2=list(filter(lambda x:type(x)==int,l1))
print(l2)

l1 = [10,"renil", 20.3, "rohit"]
l2=list(filter(lambda x:type(x)==str,l1))
print(l2)

---------------P18> Filter all vowels from the given string.

name = "renilpatel"
vowel= ["a", "e", "i", "o", "u"]
x = list(filter(lambda ch: ch in vowel, name))
print(x)

---------------P18> Filter all vowels from the given string.

name = "renilpatel"
vowel= ["a", "e", "i", "o", "u"]
x = list(filter(lambda ch: ch in vowel, name))
print(x)

---------------P19> From the provided list filter, the even numbers and odd numbers as a separate output list

l1=[1,2,3,4,5,6]
even=list(filter(lambda num: num%2==0,l1))
odd=list(filter(lambda num: num%2==1,l1))

print(even)
print(odd)

---------------P20>Write a lambda function that will take 2 inputs. If inputs are integers, it will return the product of 2 numbers. Else perform concatenation.

value1 = eval(input("Enter value 1"))
value2 = eval(input("Enter value 2"))

output = lambda a,b: a+b if type(a)==str and type(b)==str else int(a)*int(b)
print(output(value1, value2))

---------------P21>Sort the list elements using lambda

l1 = [5, 2, 9, 1, 5, 6]
l1.sort(key=lambda x: x)
print(l1)


---------------P22>Find the average of all the elements passed as an argument in lambda (using variable length arguments)

average = lambda *a: sum(a)/len(a)
print(average(1, 2, 3, 4, 5))

---------------P23>Find the square of each element of a list (using map())

l1 = [1, 2, 3, 4, 5]
ans = list(map(lambda x: x**2, l1))
print(ans)

---------------P24>Use a lambda function to calculate grades for a list of scores (using map()) Eg scores = [88, 92, 78, 95, 86]

scores = [88, 92, 78, 95, 86]
grade = list(map(lambda x: 'A' if x>=90 else 'B', scores))
print(grade)

---------------P25>Add all the elements of the list (using reduce())


l1 = [1, 2, 3, 4, 5]
total = reduce(lambda x, y: x + y, l1)
print(total)

---------------P26>Multiply all the elements of the list (using reduce())

l1 = [1, 2, 3, 4, 5]
total = reduce(lambda x, y: x * y, l1)
print(total)

---------------P26>Find the maximum element from the list using reduce()

l1 = [1, 20, 3, 4, 5]
max = reduce(lambda x, y: x if x > y else y, l1)
print(max)

---------------P27>Sorting the dictionary elements using lambda (by using sorted () method) according to age and if age is same then sort my name

stud= [
    {'name': 'Amit', 'age': 25}, 
    {'name': 'Bina', 'age': 22}, 
    {'name': 'Dax', 'age': 25}
]

sort = sorted(stud, key=lambda x: (x['age'], x['name']))
print(sort)

---------------P28> Sorting the dictionary elements using lambda (by using sorted () method) according to age and if age is same then sort my name

nums1 = [6, 5, 3, 9]
nums2 = [0, 1, 7, 7]
result = list(map(lambda x, y: x + y, nums1, nums2))
print(result)

---------------P29> Take a list of person names and display them all in upper case using map()

names = ['Alice', 'Bob', 'Charlie']
upper_names = list(map(lambda name: name.upper(), names))
print(upper_names)


---------------P34> Take a string as an input and display the output to analysis the string based on separate words. Using map()
A. Display the words in upper case along with the length of each word

input_string = input("Enter a string: ")
words = input_string.split()
result = list(map(lambda word: (word.upper(), len(word)), words))
print(result)

B. Display total number of each vowel in each word

str = input("Enter a string: ")
vowels = 'aeiouAEIOU'
result = list(map(lambda word: {vowel: word.count(vowel) for vowel in vowels, length: len(word)}, str.split()))
print(result)

-------------------P35>Take a matrix as input and transpose its elements using lambda

matrix = [[1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]
transposed = zip(matrix)
print(list(transposed))

-------------------P36>Find the factorial of a number using lambda (recursive)

fact = lambda n: 1 if n==0 else n * fact(n-1)
print(fact(5))

-------------------P37>Create a menu driven program with user defined functions to insert update delete elements in the dictionary object of employees

employees = {}

def insert_employee(id, name):
    employees[id] = name
    print("Employee {name} with ID {id} inserted.")

def update_employee(id, name):
    if(id in employees):
        employees[id] = name
        print("Name is Updated")
    else:
        print("Employee id is not define")
    
def delete(id):
    if(id in employees):
        del employees[id]
        print("Employee is deleted")
    else:
        print("Employee id is not define")

def display():
    print(employees)

while True:
    print("Menu:")
    print("1. Insert Employee")
    print("2. Update Employee")
    print("3. Delete Employee")
    print("4. Display Employee")
    print("4. Exit")

    choice = int(input("Enter your choice: "))
    if choice == 1:
        id=int(input("Enter id = "))
        name=input("Enter name = ")
        insert_employee(id, name)
    elif choice == 2: 
        id=int(input("Enter id = "))
        name=input("Enter name = ")
        update_employee(id, name)
    elif choice == 3: 
        id=int(input("Enter id = "))
        delete(id)
    elif choice == 4:
        display()
    else:
        print("Enter valid number")
    
-------------------P38> Write a python script to generate result for a particular student.

"""


