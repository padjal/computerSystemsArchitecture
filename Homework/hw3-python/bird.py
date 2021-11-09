import animal as animal

from animal import *


# ----------------------------------------------
class Bird(Animal):
    def __init__(self):
        super().__init__()
        self._is_migrating = False

    def read_str_array(self, strArray, i):
        if i >= len(strArray) - 2:
            return 0
        self.name = strArray[i]
        self.weight = int(strArray[i + 1])
        self._is_migrating = bool(strArray[i + 2])
        i += 3
        return i

    def print(self):
        print("Bird: name = ", self.name, " weight = ", self.weight,
              "isMigrating = ", self._is_migrating, ", special_number = ", self.special_number())

    def write(self, ostream):
        ostream.write("Bird: name = {}  weight = {}  isMigrating = {}, special_number = {}"
                      .format(self.name, self.weight, self._is_migrating, self.special_number()))

    def special_number(self):
        letters = 0

        for c in self.name:
            letters += ord(c)

        return letters / self.weight
