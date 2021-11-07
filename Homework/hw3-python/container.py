# ----------------------------------------------
class Container:
    def __init__(self):
        self.store = []

    # def ReadStrArray(self, strArray):

    def print(self):
        print("Container is store", len(self.store), "shapes:")
        for shape in self.store:
            shape.print()
        print("Summa of special_numbers  = ", self.special_number())
        pass

    def write(self, ostream):
        ostream.write("Container is store {} shapes:\n".format(len(self.store)))
        for shape in self.store:
            shape.write(ostream)
            ostream.write("\n")
        ostream.write("Summa of special_numbers  = {}\n".format(self.special_number()))
        pass

    def special_number(self):
        perim = 0.0
        for shape in self.store:
            perim += shape.perimeter()
        return perim
