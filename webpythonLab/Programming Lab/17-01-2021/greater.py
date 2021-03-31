# Program to find the greatest among the 3 given numbers

print("Find the biggest of 3 numbers entered by the user \n")

l = 1

while(l!=0):
        if l == 1:
                print("Enter the three numbers one by one \n")

                x = int(input())
                y = int(input())
                z = int(input())
                print("\n")
                if x == y == z:
                    print("Elements are equal")
                    print("\n")
                    print('Press 0 to exit or 1 to continue ')
                    l = int(input())
                else:      
                 if x > y and x!=z:
                        if x > z:
                               print(str(x)+"  is greater")
                               print("\n")
                               print('Press 0 to exit or 1 to continue ')
                               l = int(input())
                        else:
                               print(str(z)+ "  is greater")
            
                               print("\n")
                               print('Press 0 to exit or 1 to continue ')
                               l = int(input())
                 if y > x and y!=z:
                        if y > z:
                               print(str(y)+"  is greater")
                               
                               print("\n")
                               print('Press 0 to exit or 1 to continue ')
                               l = int(input())
                        else:
                               print(str(z)+"  is greater")
                               
                               print("\n")
                               print('Press 0 to exit or 1 to continue ')
                               l = int(input())
                 
                 if x == y:
                     if x > z:
                         print("\n First and second are both equal and biggest" +str(x))
                         print("\n")
                         print('Press 0 to exit or 1 to continue ')
                         l = int(input())      
                     else:
                          print(str(z)+"  is greater")
                          print("\n")
                          print('Press 0 to exit or 1 to continue ')
                          l = int(input())
                 if y == z:
                     if y > x:
                         print(  "\n Second and third numbers are both equal and biggest  "+str(y))
                         print("\n")
                         print('Press 0 to exit or 1 to continue ')
                         l = int(input())      
                     else:
                          print(str(x)+"  is greater")
                          print("\n")
                          print('Press 0 to exit or 1 to continue ')
                          l = int(input())
                 if x == z:
                     if x > y:
                         print("\n First and Third numbers are both equal and biggest  "+str(x))
                         print("\n")
                         print('Press 0 to exit or 1 to continue ')
                         l = int(input())      
                     else:
                          print(str(y)+"  is greater")
                          print("\n")
                          print('Press 0 to exit or 1 to continue ')
                          l = int(input())         
                         
        else:
              print("Invalid entry")
              l = int(input())
