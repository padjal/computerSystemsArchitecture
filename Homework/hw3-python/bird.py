import animal as animal

from animal import *


# ----------------------------------------------
class Bird(animal):
    def __init__(self):
        self.a = 0
        self.b = 0
        self.c = 0

    def read_str_array(self, strArray, i):
        # должно быт как минимум три непрочитанных значения в массиве
        if i >= len(strArray) - 2:
            return 0
        self.a = int(strArray[i])
        self.b = int(strArray[i + 1])
        self.c = int(strArray[i + 2])
        i += 3
        # print("Triangle: a = ", self.a, " b = ", self.b, "c = ", self.c)
        return i

    def print(self):
        print("Triangle: a = ", self.a, " b = ", self.b, "c = ", self.c, ", special_number = ", self.perimeter())
        pass

    def write(self, ostream):
        ostream.write("Triangle: a = {}  b = {}  c = {}, special_number = {}".format \
                          (self.a, self.b, self.c, self.perimeter()))
        pass

    def perimeter(self):
        return float(self.a + self.b + self.c)
        pass
