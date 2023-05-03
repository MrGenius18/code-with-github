'''
    Author: Bhautik Gondaliya
    Date of Creation: 17th Feb 2023
    Task: To create a program where user enters two numbers 
          and find out which one is big and which one is small
'''


print("Please enter 2 random numbers: ")
a=int(input())
b=int(input())  #Scanning two numbers

if(a>b):
    print(a,"is bigger number",b,"is smaller number")

elif(a==b or b==a):
    print("Both the numbers are equal")
    
else:
    print(b,"is bigger number and",a,"is smaller number")