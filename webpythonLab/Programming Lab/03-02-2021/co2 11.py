print("\n Write lambda functions to find area of square, rectangle and triangle \n")
print("Area of rectangle")
print("Enter the length and width of the rectangle : ")
l = int(input())
w = int(input())
x  = lambda l, w : l*w
print("Area of rectangle is : ",x(l,w))


print("Area of square")

c = int(input("Enter the lenth of square : "))
x  = lambda c : c*c
print("Area of square is : ",x(c))

print("Area of triangle")
print("Enter the breadth and height of the triangle : ")
b = int(input())
h = int(input())

x  = lambda b,h : b*h/2
print("Area of triangle is : ",x(b,h))
