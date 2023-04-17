#ifndef OOP_TASK2_RANDOMIZER_H
#define OOP_TASK2_RANDOMIZER_H
#include <ctime>
#include <cstdlib>
#include "Student.h"

class Randomizer {
public:
    static sttype randomizerStudent() {
        int number = rand() % 3;
        switch (number) {
            case 0:
                return good;
            case 1:
                return mid;
            case 2:
                return bad;

        }
    }

    static int randomizerVariant(int maxTestVariants) { return rand() % maxTestVariants; }
};


#endif //OOP_TASK2_RANDOMIZER_H
