print("Fibanocci series up to entered number")

n = int(input("Enter how many terms : "))
print("First",+n,"Fibanocci numbers are : ")
a=0
b=1
count=0

while count < n:
    print(a)
    c = a + b
    a = b
    b = c
    count += 1
    
    
