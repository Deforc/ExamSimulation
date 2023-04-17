#ifndef OOP_TASK2_STUDENT_H
#define OOP_TASK2_STUDENT_H

#include <string>
#include <vector>
#include "SolveEquation.h"
#include "EqationsTable.h"
enum sttype {mid, bad, good};

class Student : public SolveEquation {
private:
    sttype type;
    std::string surname;
    std::vector<int> variants;
    std::vector<std::pair<double, double>> solution;

    void addSolution(std::pair<double, double> p) { solution.push_back(p); }

public:

    Student(std::string surname, sttype type, std::vector<int> variants) {
        this->type = type;
        this->surname = surname;
        this->variants = variants;
    }

    void solveQuadraticEquation(int a, int b, int c);

    void solveTest(EqationsTable *mathTest);

    std::string getSurname() { return surname; }

    std::vector<int> getVariants() { return variants; }

    std::vector<std::pair<double, double>> getSolution () { return solution; }


};

#endif //OOP_TASK2_STUDENT_H
