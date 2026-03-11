"""

--------------------40. Create a list of students say L1
- Count total number of students from the list L1
- Add one more student in the list L1
- Display all the students in the sorted order
- Check a particular students name is present in the list or not
- If the students name is present in the list, print total number of same name students in the list L1 and display the position of 1st student
- Remove the last student from the list L1
- Remove a particular student from the list. (Take a name of student from the user.)
- While removing the student from the list, if multiple students have same name then remove all of them from the list.

name = ["renil","man", "tina", "prinsi", "sujal", "renil"]
print(len(name))

name.append("chaman")
print(name)

name.sort()
print(name)

if("haggu" in name):
    print("haggu is exist")
else:
    print("haggu is not exist")

if("renil" in name):
    print(name.count("renil"))
    print(name.index("renil"))
else:
    print("renil is not exist")

print(name)
print(name.pop())
print(name)

delname = input("Enter a name to remove: ")
if delname in name:
    name.del(delname)
    print("Name removed successfully")
else:
    print("Name not found")


--------------------41. Create a list of 10 numbers and find the maximum and minimum numbers from it.

list1 = [1,2,3,4,5,6,23,54,23,76,32]
print(max(list1))
print(min(list1))

--------------------42. Create a list of alphabets and count total number of vowels in it.

vowel = ["a","e","i","o","u"]
list2 = ["r","m","u","t","s","p","i","o","m"]
count = 0
for i in range(len(list2)):
    if(list2[i] in vowel):
        count=count+1

print(count)

--------------------43. Create a list of even numbers between 1 to 21 using range()

even = []
for i in range(1,22):
    if(i%2==0):
        even.append(i)
print(even)


--------------------44. Create a list of employees (nested list) with their personal details like [name, age, salary, expertise] in a list. Ask the user to enter name and display the details of that employee. If the employee is not in the list, print error message.

emp = [["renil", 21, 200000, "code"], ["tina", 70, 25000, "cooking"], ["man", 21, 300000, "cooking"]]
name = input("Enter name to search employee = ")

flag=0
for i in range(0, len(emp)):
    if(name in emp[i]):
        flag=1
        print("name is founded at = ", i+1)
        print(emp[i])

if(flag==0):
    print("name is not found")

--------------------45. Create a list by taking any 5 inputs from the user.

list1 = []
for i in range(5):
    name = input("enter name ")
    list1.append(name)
print(list1)


--------------------46. Display the students from L1 list, whose name contains the character a.

list1 = ["renil", "man", "tina", "prinsi", "suju"]

for i in list1:
    if("a" in i):
        print(i)

--------------------47. Create a list of 10 numbers and find the total of odd numbers and even numbers


num = [1,2,3,4,5,16,7,8,9,10,11]
odd = 0
even = 0

for i in num:
    if(i%2==0):
        even = even +1
    else:
        odd = odd +1
print(odd)
print(even)


--------------------48. Put all the odd numbers in one list and even numbers in another list.

num = [1,2,3,4,5,16,7,8,9,10,11]
odd = []
even = []

for i in num:
    if(i%2==0):
        even.append(i)
    else:
        odd.append(i)
print(odd)
print(even)


--------------------49. Create a list having mixed elements like string and integers. Print only integer elements from the list with and without using list comprehension

list1 = [1, 2, "renil", 4, 5, "man", "tina", 7, 9]

intvalue = [i for i in list1 if type(i)==int]
print(intvalue)

intvalue = []
for i in list1:
    if(type(i)==int):
        intvalue.append(i)
    
print(intvalue)

"""