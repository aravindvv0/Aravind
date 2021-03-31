print("Program to Count the number of each word in a line of text")
a = str(input("Enter a string: "))
a = a.lower()

words = a.split(" ")
print(words)
d=dict()
print("Occurence of each words are: \n")
for word in words:
    if word in d:
        d[word] = d[word]+1
    else:
        d[word] = 1
for key in list(d.keys()):
    print(key, ":" , d[key])
    
    
