print("Form a list of vowels selected from a given word")
print("\n")
print("Enter a word : ")
print("\n")


abc = str(input())
list=[]

for i in abc:
     
     
     if(i=='a') or (i=='e') or (i=='i') or (i=='o') or (i=='u'):
                                            list.append(i)

print("The vowels on the word ",abc,"are : ")
print("\n")
print(list)        
    
