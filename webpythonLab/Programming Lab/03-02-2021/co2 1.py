print("Program to find the factorial of given number")



def fact(n):
            if (n== 1) or(n==0):
                return n
            else:
                return n * fact(n-1)
       
print("Enter a positive number : ")
number =  int(input())
print("Factorial of",+ number ,"is :")
print(fact(number))

