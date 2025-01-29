
print("Hello World")
a, b, c = 1, 2, 3

if(a > b and a > c):
    print(a, "is the maximum number.")

elif(b > c):
    print(b, "is the maximum number.")
else:
    print(c, "is the maximum number.")
a, b = 1, 2
a, b = b, a

print(a, b)

a = int(input("Enter 1st number :"))
b = int(input("Enter 2nd number :"))

op = input("Enter the operation you want to perform(+, -, *, /) :")

if(op == '+'):
    print(a + b)
elif(op == '-'):
    print(a - b)
elif(op == '*'):
    print(a * b)
elif(op == '/'):
    print(a / b)
else:
    print("Invalid operator!")
    
a = int(input("Enter 1st number : "))
b = int(input("Enter 2nd number : "))

sum = a + b
print("The sum is :", sum)