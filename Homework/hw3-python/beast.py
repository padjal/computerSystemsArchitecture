import animal as animal

from animal import *


# ----------------------------------------------
class Beast(Animal):
    def __init__(self):
        super().__init__()
        self._type = 1

    def read_str_array(self, strArray, i):
        # должно быт как минимум три непрочитанных значения в массиве
        if i >= len(strArray) - 2:
            return 0
        self.name = strArray[i]
        self.weight = int(strArray[i + 1])
        self._type = int(strArray[i + 2])
        i += 3
        return i

    def print(self):
        animal_type = ""

        if self._type == 1:
            animal_type = "Carnivore"
        elif self._type == 2:
            animal_type = "Herbivore"
        elif self._type == 3:
            animal_type = "Omnivore"

        print("Beast: name = ", self.name, " weight = ", self.weight, "type = ", type,
              ", special_number = ", self.special_number())

    def write(self, ostream):
        animal_type = ""

        if self._type == 1:
            animal_type = "Carnivore"
        elif self._type == 2:
            animal_type = "Herbivore"
        elif self._type == 3:
            animal_type = "Omnivore"

        ostream.write("Beast: name = {}  weigh = {}  type = {}, special_number = {}"
                      .format(self.name, self.weight, animal_type, self.special_number()))

    def special_number(self):
        letters = 0

        for c in self.name:
            letters += ord(c)

        return letters / self.weight
