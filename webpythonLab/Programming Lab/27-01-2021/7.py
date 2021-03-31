list1=[]
list2=[]
n=  int(input("Enter the size of list 1 : "))
m=  int(input("Enter the size of list 2 : "))

print("Enter integer elements of list 1")
for i in range(0,n):
    
    value = int(input())
    list1.append(value)

print("Enter integer elements of list 2")
for i in range(0,m):
    
    value = int(input())
    list2.append(value)

a = len(list1)
b = len(list2)
c = 0
d = 0

import math
if a == b:
    print("Lists are equal in length",+a)
else:
    print("Lists are not equal in length : ",+a,"and",+b,"are the lengths")
for i in range(0, len(list1)):
    c  =  c+list1[i]

for i in range(0, len(list2)):
    d  =  d+list2[i]


if c==d:
    print("Sum of integers are equal in both list : ",+ c)
else:
    print("Sum of integers in list 1 : ",+c ," and sum of integers in list 2 : ",+d , "are not equal")
flag=0   
print("Values occuring in both the lists are : ")    
for i in list1:
    for j in list2:
        if i==j:
            print(i)
            flag=1
if(flag==0):
    print("No same element occur in both the list ")
    
    
