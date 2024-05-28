class course:
    def __init__(self, title, instructor, duration):
        self.title = title
        self.instructor = instructor
        self.duration = duration

    def get_details(self):
        return f"{self.title} {self.instructor} {self.duration}"


class ProgrammingCourse(course):
    def __init__(self, title, instructor, duration, p_language, Project_assigned):
        super().__init__(title, instructor, duration)
        self.p_language = p_language
        self.Project_assigned = Project_assigned

    def teach_coding_language(self):
        print("Here We learn Abstraction,Polymorphism,Inheritance,Encapsulation")

    def provide_practical_exercise(self):
        print("Practice Problem from Codeforces,Codechef and Snakify ")

    def get_details(self):
        return f"{super().get_details()} {self.p_language} {self.Project_assigned}"


class LanguageCourse(course):
    def __init__(self, title, instructor, duration, language, conversation_practice):
        super().__init__(title, instructor, duration)
        self.language = language
        self.conversation_practice = conversation_practice

    def teach_grammer_rules(self):
        print("First of all we have to learn tense from Providing Text book")

    def offer_conversation_practice(self):
        print("English Conversation Skill must be improved")

    def get_details(self):
        return f"{super().get_details()} {self.language} {self.conversation_practice}"


class ArtCourse(course):
    def __init__(self, title, instructor, duration, medium, project_assigned):
        super().__init__(title, instructor, duration)
        self.medium = medium
        self.project_assigned = project_assigned

    def demonstrate_techniques(self):
        print("Follow Proper Technique for better arts")

    def assign_creative_projects(self):
        print("Water Color Drawing Looks beautiful")

    def get_details(self):
        return f"{super().get_details()} {self.medium} {self.project_assigned}"


a = ProgrammingCourse(
    "Python for Beginners", "John Smith", " 8 weeks", "Python", "Car Game"
)
b = LanguageCourse("English 101", "Maria Rodriguez", "10 Weeks", "spanish", "Try again")
c = ArtCourse(
    "Oil Painting Fundamental",
    "Emily Brown",
    "12 Weeks",
    "Oil Painting",
    "Make a Village art",
)


print(a.get_details())
# print(a.teach_coding_language())
# print(a.provide_practical_exercise())
print(b.get_details())
# print(b.teach_grammer_rules())
# print(b.offer_conversation_practice())
print(c.get_details())
# print(c.demonstrate_techniques())
# print(c.assign_creative_projects())
