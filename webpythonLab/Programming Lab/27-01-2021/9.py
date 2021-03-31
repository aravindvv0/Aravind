print("Strings first and last characters will be excahnged:")
print("\n")
a = str(input("Enter the string :"))
print("\n")
print("String after the exchange:")
print("\n")
b  = a[-1:] + a[1:-1] + a[:1]
print(b)

