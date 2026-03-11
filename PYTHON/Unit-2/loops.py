"""
------------------------------1. find the maximum and minimum from 2 number

n1 = 10
n2 = 30

if(n1>n2):
    print("Number 1 is maximum")
else:
    print("Number 2 is maximum")


------------------------------2. find the maximum and minimum from 3 number


n1 = 100
n2 = 50
n3 = 40

if(n1>n2 and n1>n3):
    print("Number 1 is maximum")
elif (n2>n1 and n2>n3):
    print("Number 2 is maximum")
else:
    print("Number 3 is maximum")


------------------------------3. write a program to input the salary and calculate da, hra, pf

salary = int(input("Enter your salary = "))
da=0
hra=0
pf=0

if(salary<10000):
    da = salary*0.25
    hra = salary*0.05
elif(salary>=10000 and salary<=30000):
    da = salary*0.35
    hra = salary*0.10
elif(salary>30000):
    da = salary*0.40
    hra = salary*0.20
pf = salary * 0.12

print("da is =",da, "\nhra is =", hra, "\npf is =", pf)


------------------------------4. print 1 to 10 number in ascending and descending order using range

for i in range(1, 11):
    print(i)

for i in range(10, 0, -1):
    print(i)


------------------------------5. print odd number between 1 to 50

for i in range(1,51):
    if(i%2==1):
        print(i, end=" ")


------------------------------6. print the * patterns using range()

for i in range(1,6):
    for j in range(1,i):
        print("*", end = " ")
    print("\n")


------------------------------7. print the number pyramid using range

key = 1
for i in range(1,6):
    for j in range(1, 6-i):
        print(" ", end=" ")
    for k in range(1, i):
        print(key, " ", end=" ")
        key=key+1
    print("\n")


------------------------------8. print all prime number between 10 to 50


prime = 1

for i in range(10, 51):
    prime=1
    for j in range(2,i):
        if(i%j==0):
            prime = 0
            break
    if(prime==1):
        print(i)
    
------------------------------9. take 10 numbers(min 3 digits) from user input and check whether a number is palindrome or not


num = {}
for i in range(0,10):
    num[i]=int(input("Enter number "))

for i in range(0,10):
    digit = num[i]
    temp = digit
    rev = 0
    while(digit!=0):
        last = digit%10
        rev = (rev*10)+last
        digit = digit//10

    if(temp == rev):
        print(num[i]," is palindrome")
    else:
        print(num[i],"number is not palindrome")


------------------------------10. wap to check whether the given number is armstrong or not

num = int(input("Enter number to check armstrong"))
temp = num
sum=0

while(num!=0):
    last = num%10
    sum = sum + (last*last*last)
    num = num // 10

if(sum==temp):
    print("number is armstrong")
else:
    print("number is not armstrong")

------------------------------11. wap to input n numbers and count the total number of odd and even numbers in the list

num = {}
length = int(input("Enter total number for length = "))

for i in range(0,length):
    num[i]=int(input("Enter number = "))

for i in range(0,length):
    if(num[i]%2==0):
        print(num[i], "= is even")
    else:
        print(num[i], "= is odd")

"""


