class Container:
    def __init__(self):
        self.store = []

    # def ReadStrArray(self, strArray):

    def print(self):
        print("There are ", len(self.store), "animals in the container:")
        for shape in self.store:
            shape.print()
        print("Sum of all special numbers  = ", self.special_number())
        pass

    def write(self, ostream):
        ostream.write("There are {} animals:\n".format(len(self.store)))
        for shape in self.store:
            shape.write(ostream)
            ostream.write("\n")
        ostream.write("Sum of special numbers  = {}\n".format(self.special_number()))
        pass

    def special_number(self):
        special_number_sum = 0.0
        for animal in self.store:
            special_number_sum += animal.special_number()
        return special_number_sum
