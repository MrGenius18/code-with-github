'''
    Author: Bhautik Gondaliya
    Date of Creation: 22th Feb 2023
    Task: Armstrong number or not
'''

num=int(input("Enter the number: "))
sum=0

nstr=str(num)
ndigit=len(nstr)

for n in nstr:
    i=int(n)
    sum+=i**ndigit

if num==sum:
    print(num,"is Armstrong")

else:
    print(num,"not Armstrong")