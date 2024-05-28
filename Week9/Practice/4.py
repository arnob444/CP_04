class Teacher:
    def assign_grade(self, student, grade):
        student.grades.append(grade)

class Student:
    def __init__(self, name, roll_no):
        self.name = name
        self.roll_no = roll_no
        self.grades = []

s1 = Student("Arnob", 101)
t1 = Teacher()

t1.assign_grade(s1, 5.00)
t1.assign_grade(s1, 4.29)

print(f"Name : {s1.name}")
print(f"Roll number : {s1.roll_no}")
print(f"Grade : {s1.grades}") 