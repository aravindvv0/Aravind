print("\n Program to accept a list of words and return length of longest word \n")


list = []
size = int(input("Enter the number of words in the list : "))
print("Enter",+size,"words one by one : ")
for k in range(0, size):
    string = str(input())
    list.append(string)

print("List of words are : ", list)    
list2 = []
for i in range(0,len(list)):
    a = len(list[i])
    list2.append(a)

c = max(list2)

for i in range(0, len(list2)):
    if (list2[i]==c):
        break;
print("Length of the longest word in list is :   ",+c)

print("The longest word in list is :   ", list[i])
        
    
    

