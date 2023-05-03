'''
    Author: Bhautik Gondaliya
    Date of Creation: 17th Feb 2023
    Task: Program to find the year is leap year or not
'''

year = int(input("Enter a year: "))


if (year % 400 == 0) and (year % 100 == 0):
    print("{} is a leap year".format(year))


elif (year % 4 ==0) and (year % 100 != 0):
    print("{} is a leap year".format(year))


else:
    print("{} is not a leap year".format(year))