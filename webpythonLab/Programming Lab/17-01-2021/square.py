# Program to find the square of entered input.

y = 1

while(y!=0):
         if y == 1:
               print('Square of the given number \n')
               print('Enter the number \n')
               x = int(input())
               p = int(x*x)
               print("The square of the number is, \n ")
               
               print(p)
               print("\n")
               print('Press 0 to exit or 1 to continue ')
               y = int(input())
         else:
               print("Invalid entry")
               y = int(input())

