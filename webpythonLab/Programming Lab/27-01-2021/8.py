print("Program  where all occurrences of first character of a string is replaced with '$' except first character. \n")
print("\n") 
a= str(input("Enter a string: "))

print("\n")
c = str()
d = len(a)
flag = 0
for b in range(2,d) :
    
    if a[b]==a[0]:
             c = a.replace(a[b],'$')
             flag = 1
    
if(flag==1):
    e = a[0] + c[1:]
    print("Repalced string is : \n")
    print(e)
else:
    print("Repalced string is : \n")
    print(a)
