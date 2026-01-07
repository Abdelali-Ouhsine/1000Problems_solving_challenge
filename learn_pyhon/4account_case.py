n1 = float (input("enter the first number"))
n2 = float (input("enter your second number"))

if n1 >= 1 and n2 < 1: 
    print("your first number is positive")
    print("your second number is negaive")
if n2 >= 1 and n1 < 1:
    print("the first numbrt is negative")
    print("the second number is positive")
if n2 >= 1 and n1 >= 1:
    print("all the numbers are positive")
if n2 <= 1 and n1 <= 1:
    print("all the numbers are negative")
else:
    print("your number annaceptable")