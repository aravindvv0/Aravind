print(" Display the given pyramid with step number accepted from user")

b= int(input("Enter the number : "))


num=1
k=1
for i in range(1, b+1):
   
    for j in range(1, i+1):
          print(num*j," ",end="")
          
         
    print("\n")
    num=num+1 


