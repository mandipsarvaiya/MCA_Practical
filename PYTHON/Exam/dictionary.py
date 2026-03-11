"""
IMP Programs


import random

l1= [random.randrange(1,50) for i in range(12)]
l2= [random.randrange(1,50) for i in range(12)]

print(l1)
print(l2)

def comman(l1, l2):
    print("comman element")
    print(list(set(l1) & set(l2)))

def minus(l1, l2):
    print("in l1 but not in l2")
    print(list(set(l1) - set(l2)))

comman(l1, l2)
minus(l1, l2)
"""

l1 = {"MP":(29,11),"UP":(80,31), "TN":(39,18), "MH": (48, 19), "GJ": (26,11), "RJ":(25,10), "HP":(4,3)}

for i in l1:
    print("State = ", i)
    print("lockshabha", l1[i][0])
    print("rajyashabha", l1[i][1])

print("total seat is = ")
for i in l1:
    print("State ", i, "total seat is",sum(l1[i]))


  
