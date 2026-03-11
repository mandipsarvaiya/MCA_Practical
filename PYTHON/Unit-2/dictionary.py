"""
--------------------62. Create a dictionary of employees where empId will be the key and value will be the name of an employee
                        
--------------------1.Display how many employees are there in the dictionary.

employees = {
    101: "renil",
    102: "tina",
    103: "mandip",
    104: "sujal",
    105: "prinsu"
}

print(len(employees))

--------------------2.Display all empID and add them in a separate list.

employees = {
    101: "renil",
    102: "tina",
    103: "mandip",
    104: "sujal",
    105: "prinsu"
}
empList = []

for i in employees:
    empList.append(i)

print(empList)

--------------------3.Display all employee names and take them to a separate list

employees = {
    101: "renil",
    102: "tina",
    103: "mandip",
    104: "sujal",
    105: "prinsu"
}
empList = []

for i in employees:
    empList.append(employees[i])

print(empList)

--------------------4.Take an empId from the user and check if that employee is there in the dictionary or not.

employees = {
    101: "renil",
    102: "tina",
    103: "mandip",
    104: "sujal",
    105: "prinsu"
}
searchId = int(input("Enter id = "))

if searchId in employees:
    print("In Dictionary")
else:
    print("Not In Dictionary")


--------------------5.If an empID is there in the dictionary then display the name of that employee or if not available then add an ID and Name of the employee in the dictionary

employees = {
    101: "renil",
    102: "tina",
    103: "mandip",
    104: "sujal",
    105: "prinsu"
}
searchId = int(input("Enter id = "))

if searchId in employees:
    print("name is", employees[searchId])
else:
    name = input("Enter name to add new record")
    employees[searchId] = name

print(employees)

--------------------6.Change the name of the employee of empID taken by the user

employees = {
    101: "renil",
    102: "tina",
    103: "mandip",
    104: "sujal",
    105: "prinsu"
}
searchId = int(input("Enter id = "))
updateName = input("Enter New Name = ")

if searchId in employees:
    employees[searchId] = updateName
    print("nwe dictionary is", employees)
else:
    print("Not In Dictionary")


--------------------7.Remove an employee whose ID is provided by the user

employees = {
    101: "renil",
    102: "tina",
    103: "mandip",
    104: "sujal",
    105: "prinsu"
}
searchId = int(input("Enter id = "))

if searchId in employees:
    employees.pop(searchId)
    print("New dictionary is ", employees)
else:
    print("Not In Dictionary")

--------------------63. Take 5 names of students as an input from the user and create a dictionary with keys as their initials and value is a list as [age, degree, favorite subject] 

stuData = {}

for i in range(5):
    name = input("Enter name of student = ")
    initialName = name[0]

    age = int(input("Enter age = "))
    degree = input("Enter degree = ")
    favorite = input("Enter fav subject = ")
    data = [age, degree, favorite] 

    stuData[initialName] = data
print(stuData)

--------------------1.Display the youngest student from the above dictionary.

stuData = {
    'r': [16, 'bca', 'java'], 
    't': [26, 'bca', 'python'], 
    'm': [24, 'bca', 'c'], 
    'p': [14, 'bca', 'java'], 
    's': [30, 'mca', 'go']
}

for i in stuData:
    if stuData[i][0] < 18:
        print(stuData[i])

--------------------2.Create a dictionary of students having rollno of the student is as key and value is a list of marks obtained by that student in 5 subjects

stuData = {}

for i in range(5):
    roll = int(input("Enter roll no = "))
    
    data = []
    for i in range(5):
        mark = int(input("Enter marks"))
        data.append(mark)
    
    stuData[roll] = data
print(stuData)

--------------------3.Create a dictionary from the above one, where key is rollno and value is (total of all subjects, percentage and grade ) a tuple of his result
                        4.Display the rollno who has scored highest marks (total)
                        5.Take 10 numbers from the user and create a list, apply bubble sort and arrange the elements in the list.

"""

stuData = {1: [23, 54, 65, 23, 65], 2: [54, 65, 24, 98, 23], 3: [54, 87, 45, 23, 87], 4: [65, 87, 34, 23, 65], 5: [43, 76, 34, 76, 34]}
result = {}

for i in range(5):
    roll = list(stuData.keys())[i]
    total = 0
    percentage = 0
    grade = 'F'
    for marks in stuData[roll]:
        total = total+marks
    percentage = total/5
    if(percentage>35):
        grade = 'P'
    data = (total, percentage, grade)
    result[roll] = data
print(result)
