from extender import *


def read_str_array(container, data):
    index = 0
    figNum = 0
    while index < len(data):
        str = data[index]
        key = int(str)
        if key == 1:
            index += 1
            shape = Fish()
            index = shape.read_str_array(data, index)
        elif key == 2:
            index += 1
            shape = Bird()
            index = shape.read_str_array(data, index)
        elif key == 3:
            index += 1
            shape = Beast()
            index = shape.read_str_array(data, index)
        else:
            return figNum
        if index == 0:
            return figNum
        figNum += 1
        container.store.append(shape)
    return figNum
