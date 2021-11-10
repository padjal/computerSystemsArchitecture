import sys
import time

from extender import *

from container import Container

if __name__ == '__main__':
    if len(sys.argv) == 4:
        inputFileName = sys.argv[2]
        outputFileName = sys.argv[3]
    elif len(sys.argv) == 3:
        inputFileName = sys.argv[2]
        outputFileName = "results/output.txt"
    elif len(sys.argv) == 2:
        print("Incorrect command line! You must write: python main -f <inputFileName> [<outputFileName>]\n"
              "or python main -r <inputFileName> [<outputFileName>] -> for random input")
        exit()

    print('==> Start')

    container = Container()

    if sys.argv[1] == '-f':
        start_time = time.time()
        inputFile = open(inputFileName)
        inputFIleText = inputFile.read()
        inputFile.close()
        data = inputFIleText.replace("\n", " ").split(" ")
        figNum = read_str_array(container, data)

    elif sys.argv[1] == '-r':
        animals_number = int(input("How many animals would you like to add?: "))
        start_time = time.time()
        container.randomly_fill(animals_number)

    container.print()
    outputFile = open(outputFileName, 'w')
    container.write(outputFile)
    outputFile.close()

    print('==> Finish')

    end_time = time.time()
    print("Program finished in ", end_time - start_time, "s.")
