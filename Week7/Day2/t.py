class game:
    def __init__(self, title, genre, release_year):
        self.title = title
        self.genre = genre
        self.release_year = release_year

    def get_details(self):
        return f"{self.title} {self.genre} {self.release_year}"


class ActionGame(game):
    def __init__(self, title, genre, release_year, diff_level, levels_completed):
        super().__init__(title, genre, release_year)
        self.diff_level = diff_level
        self.levels_completed = levels_completed

    def implement_combat_system(self):
        print("Implements Combat Details")

    def create_challenging_levels(self):
        print("Creates Challenges")

    def get_details(self):
        return f"{super().get_details()} {self.diff_level} {self.levels_completed}"


class AdventureGame(game):
    def __init__(self, title, genre, release_year, narr_Storyline, charecters):
        super().__init__(title, genre, release_year)
        self.narr_Storyline = narr_Storyline
        self.charecters = charecters

    def dev_nerrative_storyline(self):
        print("Implements Combat Details")

    def design_exp_mechanics(self):
        print("Creates Challenges")

    def get_details(self):
        return f"{super().get_details()} {self.narr_Storyline} {self.charecters}"


class SportsGame(game):
    def __init__(self, title, genre, release_year, sport_type, multiplayer_supported):
        super().__init__(title, genre, release_year)
        self.sport_type = sport_type
        self.multiplayer_supported = multiplayer_supported

    def simulate_realistic_gameplay(self):
        print("Implements Combat Details")

    def offer_multiplayer_options(self):
        print("Creates Challenges")

    def get_details(self):
        return f"{super().get_details()} {self.sport_type} {self.multiplayer_supported}"


action_game = ActionGame(
    "Call of Duty: Warzone", "First-person Shooter", "2020", "Hard", 10
)
adventure_game = AdventureGame("Need for speed", "racting", "2017", "Epic storyline", 1)
sports_game = SportsGame(
    "FIFA 21", "Soccer", "2024", "Single-player and Multiplayer", "True"
)

print(action_game.get_details())
print(adventure_game.get_details())
print(sports_game.get_details())