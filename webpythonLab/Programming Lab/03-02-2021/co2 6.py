print("Character Frequency in given string : ")

string = str(input("Enter a string : "))
  
 
d = {} 
  
for i in string: 
    if i in d: 
        d[i] += 1 
    else: 
        d[i] = 1
  
 
print ("Count of all characters in the entered string  :\n ")
print("\n")
print(d)

