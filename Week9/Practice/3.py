class Teacher:
    def __init__(self, name):
        self.name = name
        self.student = []
    
    def display_details(self):
        print(f"Teacher Name : {self.name}")
        print(f"Number of students : {len(self.student)}")
        print(f"Name of students : {self.student}")
    
    def add_student(self, name):
        self.student.append(name)

t1 = Teacher("Mr Alex")
t1.add_student("Rahim")
t1.add_student("Asif")
t1.display_details()