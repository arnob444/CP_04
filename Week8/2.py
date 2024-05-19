class Employee:
    def __init__(self, name, department, ustad, rating):
        self.name = name
        self.department = department
        self.ustad = ustad
        self.rating = rating


class Sales(Employee):
    def salesEmployee(self):
        print(f"{self.name}, {self.department}, {self.ustad}, {self.rating}")

    def productivity(self):
        print(f"{self.name}({self.department}) - {self.ustad/self.rating}")


class Development(Employee):
    def salesEmployee(self):
        print(f"{self.name}, {self.department}, {self.ustad}, {self.rating}")

    def productivity(self):
        print(f"{self.name}({self.department}) - {self.ustad/self.rating}")


class Manager(Employee):
    def salesEmployee(self):
        print(f"{self.name}, {self.department}, {self.ustad}, {self.rating}")

    def productivity(self):
        print(f"{self.name}({self.department}) - {self.ustad/self.rating}")


employees = [
    Sales("Alice", "Sales", 10000, 50),
    Development("Bob", "Development", 5000, 10),
    Manager("Charlie", "manager", 5, 10),
]

for i in employees:
    i.productivity()
