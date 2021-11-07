# Animals following OOP principles
### HW2 from the Computer Software Architecture course

## Variant 292 - task 12, sort 21
My given number was 292, which therefore resulted in me doing task **#12
Animals** and sorting the elements by **#21** - delete those elements, which
have a special number less than the average special number of all
elements in the container. The remaining elements move to the beginning
of the container.

## Project description
The project realizes the same functionality as HW1, but now uses OOP. The
animal base class is inherited by its descendants:
- ***fish*** - which contains an enum, indicating the habitat (river, sea, or lake)
- ***bird*** - which contains a private boolean field, indicating whether the bird
migrates in winter
- ***beast*** - which also has an enum, which specifies the type of food
that the beast ets (carnivore, herbivore, or omnivore)

## Architecture
### File structure
The program is an example of the OOP
architectural pattern. It is composed of the following files:

#### Header files [6]
    animal.h
    fish.h
    bird.h
    beast.h
    rnd.h
    container.h
    habitatEnum.h
    beastEnum.h

#### Source files [6]
    animal.cpp
    main.cpp
    fish.cpp
    container.cpp
    beast.cpp
    bird.cpp

### Caller graph
![](resources/Caller_graph.png)

#### Memory
These files take 11.0kB. The compiled project file takes 116,5kB.

#### Memory allocation
![Class memory](resources/class_memory.png)

![Program memory](resources/program_memory.png)

#### Speed
The program takes from 0.000156 (for three elements) to 0.000708 (for 128 elements) seconds. 

#### Testing
Sample test files are included in the test folder.

Here are some examples of command line arguments when running the program:

    -f ../tests/test01.txt ../results/output1.txt ../results/output2.txt



