print("\n")
print("Program to display future leap years from current year to the final year entered by the user ")

a = int(input("Enter a future year : "))
if(a>2021):
    if(a>2023):
        print("Leap years between 2021 and",+ a ,"are :")
        print("\n")
        for i in range(2021, a+1):

                   if (i % 4) == 0:
                               if (i % 100) == 0:
                                    if (i % 400) == 0:
                                       print(i)
                                       
                                   
                               else:
                                   print(i)
                                   
    else:
        print("No leap years between 2021 and",+a)
              
else:
    print("Year entered is not a future year")
