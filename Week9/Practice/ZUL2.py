# Encapsulation
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

for i in person_list:
    if i.get_date_of_birth() > 20:
        print(i.get_summary())





# a_person = Person("Bikash", 20, 5.9)
# print(a_person.get_summary())
# print()

# a_person.set_name("Arnob Das Shacha")
# print(a_person.get_summary())
# print()

# a_person.set_name("0Akash")
# print(a_person.get_name())
