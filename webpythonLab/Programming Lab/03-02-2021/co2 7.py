print("Program adds 'ing' to the end of given string. If it ends in 'ing',ly is added to the end of string")
print("\n")
a = str(input("Enter a string : "))
c = str("ing")
d = str("ly")
list = []

for i in a:
    list.append(i)

length = len(list)


if(list[length-1]=='g') and (list[length-2]=='n') and (list[length-3]=='i'):
    b = a[0:]+ d
    print(b)
else:
    b = a[0:] + c
    print(b)
    











    
