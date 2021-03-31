print("List of first names are: ")
print("\n")

l=["aravind","anand","amal","alent","bibin","bello","shivan","hari","arun"]
print(l)
count = 0
for a in range(0,len(l)):
               for m in l[a]: 
                     if m=='a':
                          
                          count=count+1

        
print("\n")
print("The number of times a occur in list is : \n ")
print(count)

