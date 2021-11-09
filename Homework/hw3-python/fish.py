import animal as animal

from animal import *


class Fish(Animal):
    def __init__(self):
        super().__init__()
        self._habitat = 0

    def read_str_array(self, strArray, i):
        if i >= len(strArray) - 2:
            return 0
        self.name = strArray[i]
        self.weight = int(strArray[i + 1])
        self._habitat = int(strArray[i + 2])
        i += 3
        return i

    def print(self):
        habitat = ""

        if self._habitat == 0:
            habitat = "River"
        elif self._habitat == 1:
            habitat = "Sea"
        elif self._habitat == 2:
            habitat = "Lake"

        print("Fish: name = ", self.name, " weight = ", self.weight, "habitat = ", habitat, ", special_number = ",
              self.special_number())

    def write(self, ostream):
        habitat = ""

        if self._habitat == 0:
            habitat = "River"
        elif self._habitat == 1:
            habitat = "Sea"
        elif self._habitat == 2:
            habitat = "Lake"

        ostream.write("Fish: name = {}  weight = {}  habitat = {}, special_number = {}".
                      format(self.name, self.weight, habitat, self.special_number()))

    def special_number(self):
        letters = 0

        for c in self.name:
            letters += ord(c)

        return letters / self.weight
