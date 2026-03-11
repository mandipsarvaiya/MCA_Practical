"""
set - 
duplicate is not allowed
data is unorder - means "set" is not maintain sequance
set is mutable
create with {}

-------
s={1,2,3,1}
print(s)

output - {1,2,3}//because duplication is not allowed
-------

s={1,2,3,1}
print(s[0]) // this is not posible to access using index
-------

to access element
s={1,2,3,1}
for i in s
    print(i)
-------

add() method to add new element (can insert single element)
update() method to add new elements (can insert multiple element)
remove("banana") remove element with exception (if banana is not exist then return error)
discart("banana") remove element with exception (if banana is not exist then nothing will heppen, they not give error)

-------

set operation

a={1,2,3,4}
b={4,5,6,7}

intersection
print(a&b)

union
print(a|b)

minus
print(a-b)

simantric - (remove comman element)
print(a^b)
------

pop() remove single random element from set

--------------------49. Write a Python program to store student roll numbers in a set and prepare the sets according to the requirement of the question
--------------------   a. Write a program to add new students to an existing class attendance set.

attendance = {101, 102, 103, 104, 105}
n=int(input("Enter number of student to add = "))

for i in range(n):
    roll = int(input("Enter roll number = "))
    attendance.add(roll)

print(attendance)

--------------------   b. Write a program to remove students who are absent from the attendance set.


attendance = {101, 102, 103, 104, 105}
absent = {102}

for i in absent:
    if i in attendance:
        attendance.remove(i)

print(attendance)

--------------------50. Create a sets of Courses and write a program to check whether a given student is enrolled in a particular course or not.
--------------------   a. Write a program to find students who are enrolled in both the courses.


mca = {101, 102, 103}
bca = {102, 105, 106}


list1 = mca.union(bca)
rollno = int(input("Enter rollno to check student is enrolled in any corse or not = "))

if(rollno in list1):
    print("student is enrolled in course")
else:
    print("student is not enorlled in any course")

both = mca.intersection(bca)
print(both)

--------------------51. Create two sets of elective subjects chosen by the students. Write a program to find students who are enrolled in at least one of two elective subjects
--------------------   a. Write a program to find students who are enrolled only in Course A and not in Course B.
--------------------   b. Write a program to find students who participated in exactly one of two courses.
--------------------   c. Write a program to remove duplicate student from course sets.

nocode = {1,2,3,4,5}
laravel = {5,6,7,8}

roll = int(input("Enter roll no"))
if(roll in nocode.union(laravel)):
    print("enrolled")
else:
    print("not enrolled")

# a.
onlyNocode = nocode.difference(laravel)
print(onlyNocode)

# b.
print(nocode ^ laravel)

# c.
removeStu = nocode.intersection(laravel)
allStu = nocode.union(laravel)

for i in removeStu:
    allStu.remove(i)
    
print(allStu)


--------------------52. Given the set
                        students = {"Amit", "Neha", "Riya", "Karan"}
                        write a Python program to check whether "Riya" is enrolled in the course.

students = {"Amit", "Neha", "Riya", "Karan"}
if("Riya" in students):
    print("riya is enrolled")
else:
    print("riya is not enrlled")

--------------------53. Given the sets 
                        math_students = {"Amit", "Neha", "Riya"}
                        cs_students = {"Riya", "Karan", "Pooja"}
                        write a program to find students enrolled in both subjects.

math_students = {"Amit", "Neha", "Riya"}
cs_students = {"Riya", "Karan", "Pooja"}

print(math_students.intersection(cs_students))


--------------------54. Given the sets
                        club_A = {"Rahul", "Sneha", "Amit"}
                        club_B = {"Sneha", "Karan", "Pooja"}
                        write a program to find students who are members of at least one club.

club_A = {"Rahul", "Sneha", "Amit"}
club_B = {"Sneha", "Karan", "Pooja"}

print(club_A.union(club_B))

--------------------55. Given the sets course_A = {"Amit", "Neha", "Riya", "Karan"} course_B = {"Neha", "Karan"} 
                        write a program to find students enrolled only in Course A.

course_A = {"Amit", "Neha", "Riya", "Karan"}
course_B = {"Neha", "Karan"}

print(course_A.difference(course_B))

--------------------56. Given the sets workshop1 = {"Amit", "Riya", "Pooja"} 
                        workshop2 = {"Riya", "Karan", "Neha"} 
                        write a program to find students who attended exactly one workshop.

workshop1 = {"Amit", "Riya", "Pooja"} 
workshop2 = {"Riya", "Karan", "Neha"}

print(workshop1 ^ workshop2)

--------------------57. Given the set attendance = {"Amit", "Neha", "Riya", "Karan"} 
                        write a program to remove "Neha" from the attendance list.

attendance = {"Amit", "Neha", "Riya", "Karan"} 
attendance.remove("Neha")
print(attendance)


--------------------58. Given the set present_students = {"Ravi", "Sneha", "Amit"} 
                        write a program to display all students using a loop.

present_students = {"Ravi", "Sneha", "Amit"} 
for i in present_students:
    print(i)

--------------------59. Given the list emails = ["a@gmail.com", "b@gmail.com", "a@gmail.com", "c@gmail.com"] 
                        write a program to remove duplicate email IDs using a set.

emails = ["a@gmail.com", "b@gmail.com", "a@gmail.com", "c@gmail.com"] 
newemails = set(emails)
print(newemails)

--------------------60. Given the sets class_A = {"Amit", "Neha"} 
                        class_B = {"Amit", "Neha", "Riya", "Karan"} 
                        write a program to check whether Class A is a subset of Class B.

class_A = {"Amit", "Neha"} 
class_B = {"Amit", "Neha", "Riya", "Karan"} 

print(class_A.issubset(class_B))


--------------------61. Given the sets team1 = {"Amit", "Riya"} 
                        team2 = {"Karan", "Neha"} 
                        write a program to check whether the two teams are disjoint.

team1 = {"Amit", "Riya"} 
team2 = {"Karan", "Neha"} 

print(team1.isdisjoint(team2))

"""
