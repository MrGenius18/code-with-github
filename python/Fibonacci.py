'''
    Author: Bhautik Gondaliya
    Date of Creation: 21th Feb 2023
    Task: Fibonacci Series
'''

nterms=int(input("How many terms: "))
n1,n2=0,1
count=0

if(nterms<=0):
    print("Please enter the positive number")
elif(nterms==1):
    print("Fibonacci sequence upto",nterms,": ")
    print(n1)
else:
    print("Fibonacci Sequence: ")
    while(count<nterms):
        print(n1)
        nth=n1+n2
        n1=n2
        n2=nth
        count+=1
        