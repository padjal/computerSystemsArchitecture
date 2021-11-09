from extender import *


def read_str_array(container, strArray):
    arrayLen = len(strArray)
    i = 0  # Индекс, задающий текущую строку в массиве
    figNum = 0
    while i < arrayLen:
        str = strArray[i]
        key = int(str)
        if key == 1:
            i += 1
            shape = Fish()
            i = shape.read_str_array(strArray, i)
        elif key == 2:
            i += 1
            shape = Bird()
            i = shape.read_str_array(strArray, i)
        elif key == 3:
            i += 1
            shape = Beast()
            i = shape.read_str_array(strArray, i)
        else:
            return figNum
        if i == 0:
            return figNum
        figNum += 1
        container.store.append(shape)
    return figNum
