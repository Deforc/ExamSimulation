#ifndef OOP_TASK2_STUDENT_H
#define OOP_TASK2_STUDENT_H

#include <string>
#include <vector>
#include "SolveEquation.h"
#include "EqationsTable.h"
#include "Randomizer.h"


class Student : public SolveEquation {
private:
    std::string surname;
    std::vector<int> variants;
public:

    Student(std::string surname, sttype studentType, std::vector<int> variants) {
        this->surname = surname;
        this->variants = variants;
        type = studentType;
    }

    void solveQuadraticEquation(int a, int b, int c, sttype type)  override;

    void solveTest(EqationsTable *mathTest);

    std::string getSurname() { return surname; }

    std::vector<int> getVariants() { return variants; }

    std::vector<std::pair<double, double>> getSolution () { return solution; }


};

#endif //OOP_TASK2_STUDENT_H
