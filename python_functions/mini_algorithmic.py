import math

def factorial():
   fact= int(input("enter an aneteger to calculate his factorial"))
   fact1 = math.factorial(fact)  #fact1
   print(fact1)
factorial()

def  multiplication():
    multip = int(input("enter your number to calculte his mutiplication from 1 to 10"))
    for i in range(1,11):
      multip1 = (multip," * ",i," = ",i*multip)
      print(multip1)
multiplication()

def square():
   square = int(input("enter your number to indicate whether is a perfect square"))
   square1 = math.sqrt(square)    #square1
   print(square1)
square()

def each():
   one_by_one = str(input("enter a string for display every character one by one "))
   for i in one_by_one:
      print(i)
each()
def longest_word():
   longest = str(input("enter a sentence for display the longest word in that sentence"))
   words = longest.split(' ')
   for i in longest:
      
print(longest_word)

def occurenc():
   occur = str(input("enter your words for check whos the most character in those words"))
   char = str(input("enter the character you want to wnat to count it"))
   count = 0
   for i in occur:
      if i == char:
         count += 1
         print(f"the number of occurence is {count}")
occurenc()
