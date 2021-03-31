print("\n")
d2 = {'2':7 , '1': 9, '3': 11,'a':8}
print("Original dictionary : ", d2)
print("\n")
print("Sorted in asending:")
for i in sorted(d2):
    print("",i,":",  d2[i], ",",  end="")
print("\n")
print("Sorted in descending:")
for i in sorted(d2, reverse=True):
    print("",i,":",  d2[i], ",",  end="")
