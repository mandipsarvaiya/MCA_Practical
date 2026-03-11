"""
--------------------24. Take a string input from user and print it in reverse using range 


str = input("Enter a string: ")
for i in range(len(str)-1, -1, -1):
    print(str[i], end="")


--------------------25. Take a tuple input and print all the elements of it in reverse sequence


lis = input("Enter values of tuple with space saprated").split()
t = tuple(map(int, lis))
print(t)


--------------------26. Copy the inputted string to another string by replacing the character o with @ Eg. Hello will be copied to another string as Hell@ and Good Morning will become G@@d M@rning (Without using replace())

s1 = input("Enter String = ")
s2 = ""

for i in range(0,len(s1)):
    if(s1[i]=="o"):
        s2+="@"
    else:
        s2+=s1[i]

print("S2 is copied =",s2)


--------------------27. Take a string as an input from the user. Find total number of vowels in it. (Hint: take a tuple of vowels)

s1 = input("Enter String = ")
vowal = ("a", "e", "i", "o", "u")
count = 0
for i in range(0,len(s1)):
    if(s1[i] in vowal):
        count = count +1

print("total vowel is = ", count)


--------------------28. Create a tuple for name say t1 (FirstName, MiddleName, LastName)

t1 = ("renil","suju")


--------------------29. Create a tuple say t2 for marks of 5 subjects

t2 = (30,31,32,33,40)


--------------------30. Make a total of all the marks and print it. (with and without using sum() method)

t2 = (30,31,32,33,40)
print(sum(t2))
sum=0
for i in range(len(t2)):
    sum+=t2[i]
print(sum)


--------------------31. Make a tuple t3 having 2 elements as t1 and t2 (tuples created above) It is called a nested tuple

t1 = ("renil", "man", "sujal")
t2 = (30,31,32,33,40)
t3 = (t1,t2)

print(t3)


--------------------32. Take an input number and find whether that is present as an element in the tuple t3 or not.

t1 = ("renil", "man", "sujal")
t2 = (30,31,32,33,40)
t3 = (t1,t2)

num = int(input("Enter a number: "))
found = False
for i in range(len(t3)):
    if(num in t3[i]):
        found = True
        break

if(found):
    print("Number is present in t3")
else:
    print("Number is not present in t3")


--------------------33. Create a tuple of 5 fruits. Ask the user to input a fruit name and search that name in the given fruit tuple. Display suitable messages

fruits = ("apple", "banana", "orange", "mango", "grapes")

fruit = input("Enter a fruit name: ")
if(fruit in fruits):
    print("Fruit is present in the tuple")
else:
    print("Fruit is not present in the tuple")


--------------------34. Create a tuple of cities of Gujarat by taking user input.

cities = input("Enter cities of Gujarat with space saprated: ").split()
t4 = tuple(cities)
print(t4)


--------------------35. Find the length of name of each city in the above tuple. With and without len() method

cities = input("Enter cities of Gujarat with space saprated: ").split()
t4 = tuple(cities)
print(t4)

print("with len() method")
for i in range(len(t4)):
    print(len(t4[i]))

print("without len() method")
for i in range(len(t4)):
    count=0
    for j in range(len(t4[i])):
        count+=1
    print(count)


--------------------36. Create a nested tuple t4 of your (name, (hobbies), (friends), degree)

t4 = ("renil", ("trekking", "traveling"), ("man", "sujal","tina", "prinsi"), "MCA")
print(t4)


--------------------37. Find an element in the nested tuple (t4) and print its position if found, otherwise print “Not found”

t4 = ("renil", ("trekking", "traveling"), ("man", "sujal","tina", "prinsi"), "MCA")

element = input("Enter an element to search: ")
found = False
for i in range(len(t4)):
    if(element in t4[i]):
        found = True
        print("Element found at position", i)
        break

if(not found):
    print("Element not found")


--------------------38. Take a tuple of 10 integer numbers and segregate odd and even numbers in 2 different tuples.

t = (1,2,3,4,5,6,7,8,9,10)
even = ()
odd = ()
for i in range(len(t)):
    if(t[i]%2==0):
        even+= (t[i],)
    else:
        odd+= (t[i],)

print("Even numbers:", even)
print("Odd numbers:", odd)

"""