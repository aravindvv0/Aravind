print(" Generate a list of four digit numbers in a given range with all their digits even and thenumber is a perfect square ")
list = []
list2 = []
print("Enter the size of list : ")
size = int(input())
print("Enter",+size," 4 digit numbers one by one : ")
for i in range(0,size):
    a = int(input())
    list.append(a)
for i in list:
    if i%2 == 0:
        j=1
        while(j * j<=i):
            if((i%j==0) and (i/j == j)):
                list2.append(i)
            j = j+1

print(list2)
