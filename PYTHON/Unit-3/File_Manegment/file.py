import os
"""
Program ----- 39

# Create a text file with different modes like w, w+, a, a+ and write few lines in it

# you can not read in w

f = open("/Users/renilgarala/Coding/MCA/SEM-2/PYTHON/Files/first.txt", "w")
f.write("hello guy my name is renil")
f.write("hello")
f.close()

# you can read in w+ 
f = open("/Users/renilgarala/Coding/MCA/SEM-2/PYTHON/Files/first.txt", "w+")
f.write("good")
f.write("notkdnskn")
f.seek(0)
s = f.read()
print(s)
f.close()

# you can not read in a 
f = open("/Users/renilgarala/Coding/MCA/SEM-2/PYTHON/Files/first.txt", "a") 
f.write(" i am append")
print(s)

# you can read in a+ 
f = open("/Users/renilgarala/Coding/MCA/SEM-2/PYTHON/Files/first.txt", "a+")
f.write(" i am append")
s = f.read()
print(s)


program ------------ 40

f = open("/Users/renilgarala/Coding/MCA/SEM-2/PYTHON/Files/first.txt", "w")
f.write("hello guy my name is renil")
f.write("hello")
f.close()

f = open("/Users/renilgarala/Coding/MCA/SEM-2/PYTHON/Files/first.txt", "r")
content = f.read()
print(content)
f.close()

program -------------- 41

f = open("/Users/renilgarala/Coding/MCA/SEM-2/PYTHON/Files/first.txt", "r")
content = f.read()
print("Length in characters:", len(content))

program -------------- 42

f = open("/Users/renilgarala/Coding/MCA/SEM-2/PYTHON/Files/first.txt", "r")

for line in f:
    print(line)

program -------------- 43

f = open("/Users/renilgarala/Coding/MCA/SEM-2/PYTHON/Files/first.txt", "r")

for line in f:
    l1 = line.split()
    print(len(l1))

program -------------- 43 Print all the words in reverse.
f = open("/Users/renilgarala/Coding/MCA/SEM-2/PYTHON/Files/first.txt", "r")
data = f.read()
l1 = data.split()
for i in range(len(l1)-1,-1,-1):
    print(l1[i])

program -------------- 44 Write multiple lines in a text file. Using list object

f = open("/Users/renilgarala/Coding/MCA/SEM-2/PYTHON/Files/first.txt", "w")
l1 = ["Hello world\n", "My name is Renil\n", "I am learning Python\n"]
f.writelines(l1)
f.close()
    
program -------------- 45 Write multiple lines in a text file. Using list object

f = open("/Users/renilgarala/Coding/MCA/SEM-2/PYTHON/Files/first.txt", "w")
l1 = ["Hello world\n", "My name is Renil\n", "I am learning Python\n"]
f.writelines(l1)
f.close()

program -------------- 46 Take a filename from the user to read that file

filename = input("Enter the filename to read: ")

f = open("/Users/renilgarala/Coding/MCA/SEM-2/PYTHON/Files/"+filename+".txt", "r")
content = f.read()
print(content)
f.close()

program -------------- 47 If the file to be read is not available then print suitable message

if os.path.isfile("/Users/renilgarala/Coding/MCA/SEM-2/PYTHON/Files/first.txt"):
    print("file is exist")
else: 
    print("file is not exits")


program -------------- 48 After reading the file content, append the text at the end of the file.

f = open("/Users/renilgarala/Coding/MCA/SEM-2/PYTHON/Files/first.txt", "a+")
f.write("hello thisis second day\n")
f = open("/Users/renilgarala/Coding/MCA/SEM-2/PYTHON/Files/first.txt", "r")
data = f.read()
print(data)
f.close()


program ---------------- 49 Open a file and append a line at the beginning of the file content 

f = open("/Users/renilgarala/Coding/MCA/SEM-2/PYTHON/Files/first.txt", "a+")
f.seek(0)
f.write("\naje new day che")
f.close()

program ---------------- 50 


"""

