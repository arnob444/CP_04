class Student:
    def __init__(self, name, roll_number):
        self.name = name
        self.roll_number = roll_number
        self.grade = []

    def display_details(self):
        print(f"Name : {self.name}")
        print(f"Roll no : {self.roll_number}")
        print(f"Grade : {self.grade}")

    def add_grade(self, grade):
        self.grade.append(grade)


s1 = Student("Arnob", 1101)
s1.add_grade(99)
s1.add_grade(100)
s1.display_details()