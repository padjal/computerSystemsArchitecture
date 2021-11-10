class Animal:
    def __init__(self):
        self.name = ""
        self.weight = 0

    def get_name(self):
        return self.name

    def read_str_array(self, strArray, i):
        pass

    def print(self):
        pass

    def write(self, ostream):
        pass

    def special_number(self):
        letters = 0

        for c in self.name:
            letters += ord(c)

        return letters / self.weight
