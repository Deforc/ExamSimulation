#ifndef OOP_TASK2_TEACHER_H
#define OOP_TASK2_TEACHER_H

#include <vector>
#include <algorithm>
#include <iostream>
#include "SolveEquation.h"
#include "Randomizer.h"

class Teacher : public SolveEquation{
private:
    std::vector<std::pair<std::string, std::pair<int, int>>> resultTable;
public:
    Teacher() {
        type = good;
    }

    static std::vector<int> generateVariants(const int variantAmount, int maxTestVariants);


    void checkStudentSolution(const std::string& studentSurname, const std::vector<int>& studentVariants,
                              const std::vector<std::pair<double,double>>& studentSolutions, EqationsTable mathTest);

    void printTable();

};


#endif //OOP_TASK2_TEACHER_H
