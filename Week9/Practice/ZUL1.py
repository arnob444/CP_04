class Person:
    def __init__(self, name, age, height):
        self.name = name
        self.age = age
        self.height = height

    def get_name(self):
        return self.name

    def set_name(self, new_name):
        if self.has_any_number(new_name):
            print("Sorry name can't be a number")
            return
        self.name = new_name

    def has_any_number(self, string):
        return "0" in string

    def get_summary(self):
        return f"Name : {self.name}\nAge : {self.age}\nHeight : {self.height}"


a_person = Person("Bikash", 20, 5.9)
print(a_person.get_summary())

a_person.set_name("Arnob Das Shacha")
print(a_person.get_summary())

a_person.set_name("0Akash")
print(a_person.get_name())
