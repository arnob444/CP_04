class Student:
    def __init__(self, name, roll_no):
        self.name = name
        self.roll_no = roll_no
        self.grade = []

    def add_grade(self, grade):
        self.grade.append(grade)

    def calc_avg(self):
        if not self.grade:
            return 0
        total = sum(self.grade)
        avg = total / len(self.grade)
        return avg

s1 = Student("Arnob", 101)
s1.add_grade(5.00)
s1.add_grade(4.70)
average = s1.calc_avg()
print(f"Average Grade : {average : .2f}")

