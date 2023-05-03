'''
    Author: Bhautik Gondaliya
    Date of Creation: 2nd mar 2023
    Subject: Employee Management System
'''

employees = []

class Employee:
    def __init__(self, id, name, email, password, age, salary):
        self.id = id
        self.name = name
        self.email = email
        self.password = password
        self.age = age
        self.salary = salary
    
    def get_details(self):
        return f"ID: {self.id}\nName: {self.name}\nEmail: {self.email}\nPassword: {self.password}\nAge: {self.age}\nSalary: {self.salary}\n"

def add_employee():
    id = input("Enter employee ID: ")
    name = input("Enter employee name: ")
    email = input("Enter employee email: ")
    password = input("Enter employee password: ")
    age = int(input("Enter employee age: "))
    salary = float(input("Enter employee salary: "))
    employee = Employee(id, name, email, password, age, salary)
    employees.append(employee)
    print("Employee added successfully!\n")
    
def view_employees():
    if len(employees) == 0:
        print("No employees to display.")
    else:
        for employee in employees:
            print(employee.get_details())

def sort_by_salary():
    sorted_employees = sorted(employees, key=lambda employee: employee.salary, reverse=True)
    for employee in sorted_employees:
        print(employee.get_details())

def sort_by_age():
    sorted_employees = sorted(employees, key=lambda employee: employee.age, reverse=True)
    for employee in sorted_employees:
        print(employee.get_details())

def get_employee_details_by_id():
    id = input("Enter employee ID: ")
    for employee in employees:
        if employee.id == id:
            print(employee.get_details())
            return
    print(f"No employee found with ID {id}.\n")

while True:
    print("1. Add employee")
    print("2. View employees")
    print("3. Sort employees by salary")
    print("4. Sort employees by age")
    print("5. Get employee details by ID")
    print("6. Quit")
    choice = int(input("Enter your choice (1-6): "))
    print()
    if choice == 1:
        add_employee()
    elif choice == 2:
        view_employees()
    elif choice == 3:
        sort_by_salary()
    elif choice == 4:
        sort_by_age()
    elif choice == 5:
        get_employee_details_by_id()
    elif choice == 6:
        break
    else:
        print("Invalid choice. Please try again.\n")