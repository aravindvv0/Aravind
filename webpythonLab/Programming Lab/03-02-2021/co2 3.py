print("Find the sum of all items in a list")
list = []

print("Enter the size of list : ")
size = int(input())
print("Enter",+size,"elements one by one : ")
for i in range(0,size):
    a = int(input())
    list.append(a)


total = 0

for i in list:
    total = total + i
print("Sum of numbers in list is: ",+total)
