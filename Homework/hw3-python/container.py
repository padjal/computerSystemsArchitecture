import random
from extender import *


class Container:
    def __init__(self):
        self.store = []

    def print(self):
        print("There are ", len(self.store), "animals in the container:")
        for a in self.store:
            a.print()
        print("Sum of all special numbers  = ", self.special_number())

        print("The sorted animals are: ")
        self.sort_data()
        for a in self.store:
            a.print()

    def write(self, outputFileStream):
        outputFileStream.write("There are {} animals:\n".format(len(self.store)))
        for a in self.store:
            a.write(outputFileStream)
            outputFileStream.write("\n")
        outputFileStream.write("Sum of special numbers  = {}\n".format(self.special_number()))
        outputFileStream.write("The sorted animals are: ")

        self.sort_data()
        for a in self.store:
            a.write(outputFileStream)
            outputFileStream.write("\n")

    def special_number(self):
        special_number_sum = 0.0
        for animal in self.store:
            special_number_sum += animal.special_number()
        return special_number_sum

    def randomly_fill(self, animals):
        for animalIndex in range(animals):
            new_animal = Animal()
            animal_type = random.randint(1, 3)
            if animal_type == 1:
                # Enter fish
                new_animal = Fish()
                new_animal.name = str(random.randint(10000, 99999))
                new_animal.weight = random.randint(1, 1000)
                new_animal.habitat = random.randint(0, 2)
            elif animal_type == 2:
                # Enter bird
                new_animal = Bird()
                new_animal.name = str(random.randint(10000, 99999))
                new_animal.weight = random.randint(1, 1000)
                new_animal.is_migrating = random.randint(0, 1)
            elif animal_type == 3:
                new_animal = Beast()
                new_animal.name = str(random.randint(10000, 99999))
                new_animal.weight = random.randint(1, 1000)
                new_animal.type = random.randint(1, 3)

                # Enter beast

            self.store.append(new_animal)

    def get_average(self):
        sum = 0
        for animal in self.store:
            sum += animal.special_number()

        return sum / len(self.store)

    def sort_data(self):
        new_store = []
        average_special_number = self.get_average()

        for a in self.store:
            if a.special_number() >= average_special_number:
                new_store.append(a)

        self.store = new_store
