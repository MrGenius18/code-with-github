'''
    Author: Bhautik Gondaliya
    Date of Creation: 1st mar 2023
    Subject: Student Management System
'''

students = []

class Student:
    def __init__(self, id, name, email, password, age, marks):
        self.id = id
        self.name = name
        self.email = email
        self.password = password
        self.age = age
        self.marks = marks
    
    def get_details(self):
        return f"ID: {self.id}\nName: {self.name}\nEmail: {self.email}\nPassword: {self.password}\nAge: {self.age}\nMarks: {self.marks}\n"

def add_student():
    id = input("Enter student ID: ")
    name = input("Enter student name: ")
    email = input("Enter student email: ")
    password = input("Enter student password: ")
    age = int(input("Enter student age: "))
    marks = float(input("Enter student marks: "))
    student = Student(id, name, email, password, age, marks)
    students.append(student)
    print("Student added successfully!\n")
    
def view_students():
    if len(students) == 0:
        print("No students to display.")
    else:
        for student in students:
            print(student.get_details())

def sort_by_marks():
    sorted_students = sorted(students, key=lambda student: student.marks, reverse=True)
    for student in sorted_students:
        print(student.get_details())

def sort_by_age():
    sorted_students = sorted(students, key=lambda student: student.age, reverse=True)
    for student in sorted_students:
        print(student.get_details())

def get_student_details_by_id():
    id = input("Enter student ID: ")
    for student in students:
        if student.id == id:
            print(student.get_details())
            return
    print(f"No student found with ID {id}.\n")

while True:
    print("1. Add student")
    print("2. View students")
    print("3. Sort students by marks")
    print("4. Sort students by age")
    print("5. Get student details by ID")
    print("6. Quit")
    choice = int(input("Enter your choice (1-6): "))
    print()
    if choice == 1:
        add_student()
    elif choice == 2:
        view_students()
    elif choice == 3:
        sort_by_marks()
    elif choice == 4:
        sort_by_age()
    elif choice == 5:
        get_student_details_by_id()
    elif choice == 6:
        break
    else:
        print("Invalid choice. Please try again.\n")