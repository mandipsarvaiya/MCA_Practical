import random

# l1 = []
# l2 = []

# for i in range(0,5):
#     l1.append(random.randint(1, 50))
#     l2.append(random.randint(1, 50))

# print(l1)
# print(l2)

# def comman():
#     print(set(l1).intersection(l2))

# def onlyl1():
#     print(set(l1) - set(l2))
# comman()
# onlyl1()


# -------------------------------------

# l1 = []

# for i in range(10):
#     data = eval(input("Enter number"))
#     if(type(data) != str):
#         l1.append(data)

# print(l1)

# -------------------------------------


# students = [(1,"Sachin",53,35,41),(2,"Rahul",34,22,40), (3,"Sehwag",33,44,42)]

# l1 = []

# for i in students:
#     l1.append(i[2])

# print(sum(l1)/len(students))
# print(max(l1))

# -------------------------------------


# l1 = []
# l2 = []

# for i in range(10):
#     l1.append(random.randint(1, 100))
#     l2.append(random.randint(1, 100))

# def comman():
#     l3 = set(l1).intersection(l2) 
#     print(l3)
#     print(len(l3))

# comman()
# -------------------------------------


# Read a text file having data of 5 employees: ID, Name, Age and Salary. If file is not available or not able to read the file then handle the exception
# Display the name of the employee having maximum salary.
# Plot a bar graph to show employees Age and Salary

# f1 = open("/Users/renilgarala/Coding/MCA/SEM-2/PYTHON/Files/first.txt", "a")
# f1.write("10 renil 5 1000000 \n")
# f1.write("20 mandip 3 2000000 \n")

# f1.close()

# f1 = open("/Users/renilgarala/Coding/MCA/SEM-2/PYTHON/Files/first.txt", "r")
# data = {}

# for i in f1:
#     line = i.split()
#     print(line)

#     salary = int(line[3])
#     name = line[1]

#     data[salary] = name

# print(data[max(data)])