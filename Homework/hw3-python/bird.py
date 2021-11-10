import animal as animal

from animal import *


# ----------------------------------------------
class Bird(Animal):
    def __init__(self):
        super().__init__()
        self.is_migrating = False

    def read_str_array(self, strArray, i):
        if i >= len(strArray) - 2:
            return 0
        self.name = strArray[i]
        self.weight = int(strArray[i + 1])
        self.is_migrating = bool(strArray[i + 2])
        i += 3
        return i

    def print(self):
        print("Bird: name = ", self.name, " weight = ", self.weight,
              "isMigrating = ", self.is_migrating, ", special_number = ", self.special_number())

    def write(self, ostream):
        ostream.write("Bird: name = {}  weight = {}  isMigrating = {}, special_number = {}"
                      .format(self.name, self.weight, self.is_migrating, self.special_number()))
