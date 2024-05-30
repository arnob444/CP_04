# Inheritance
class Person:
    def __init__(self, name: str, age: int, height: float = None):
        self.__name = name
        self.__age = age
        self.__height = height

    def get_date_of_birth(self):
        return self.__age

    def get_name(self):
        return self.__name

    def set_name(self, new_name):
        if self.__has_any_number(new_name):
            print("Sorry name can't be a number")
            return
        self.__name = new_name

    def __has_any_number(self, string):
        return "0" in string

    def get_summary(self):
        return f"Name : {self.__name}\nAge : {self.__age}\nHeight : {self.__height if self.__height is not None else 'Invalid'}"


person_list = []
person_list.append(Person("Jawad", 32, 5.3))
person_list.append(Person("Billal", 31))
person_list.append(Person("Cavani", 24, 5.3))
person_list.append(Person("Ronni", 11, 5.3))
person_list.append(Person("Xavi", 12, 4.3))


class Student(Person):
    def __init__(self, name, age, email):
        super().__init__(name, age)
        self.email = email

    def get_summary(self):
        return f"Name : {self.get_name()} Email : {self.email} Age : {self.get_date_of_birth()}"

    def __repr__(self):
        pass

    def __str__(self):
        pass


# s1 = Student("Jaber", "j001gmail.com", 1992)
# print(s1.get_summary())


class Teacher(Person):
    def __init__(self, name, age, dept):
        super().__init__(name, age)
        self.dept = dept

    def get_summary(self):
        return f"{self.get_name()} is a teacher"


new_person_list = [
    Person("Arnob", 1998),
    Student("Zaman", "zaman01gmail.com", 1992),
    Teacher("Jarif", 81, "CSE"),
]

for p in new_person_list:
    print(p.get_summary())
