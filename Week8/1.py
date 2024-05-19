class tempConverter:
    def __init__(self, tmp):
        self.tmp = tmp

    def converter(self):
        return (self.tmp * 9 / 5) + 32


class labemCon(tempConverter):
    def converter(self):
        print(f"Converted Lab Temp: {super().converter()}")


class wtemConverter(tempConverter):
    def converter(self):
        print(f"Converted weather temp : {super().converter()}")


l = labemCon(25)
w = wtemConverter(10)

l.converter()
w.converter()
