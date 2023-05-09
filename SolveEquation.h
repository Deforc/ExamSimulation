#ifndef OOP_TASK2_SOLVEEQUATION_H
#define OOP_TASK2_SOLVEEQUATION_H
#include <cfloat>
#include <cmath>
#include <iostream>

enum sttype {mid, bad, good};

class SolveEquation{
public:
    SolveEquation() {
        type = good;
    }

    std::pair<double, double> getSolution(int a, int b, int c)
    {
        std::pair<double, double> sol;
        int discriminant = b * b - 4 * a * c;
        if (discriminant < 0) {
            return sol = std::make_pair(DBL_MAX, DBL_MAX);
        } else {
            double root1 = (-b + sqrt(discriminant)) / (2.0 * a);
            double root2 = (-b - sqrt(discriminant)) / (2.0 * a);
            sol = std::make_pair(root1, root2);
            return sol;
        }
    }

    virtual void solveQuadraticEquation(int a, int b, int c, sttype type) {
        if(type == good)
        solution.push_back(getSolution(a, b, c));
        else {
            std::cout << "You are not good at solving! Check, if Teacher`s type is good";
            exit(1);
        }
    };
protected:
    sttype type;
    std::vector<std::pair<double, double>> solution;
};
#endif //OOP_TASK2_SOLVEEQUATION_H
