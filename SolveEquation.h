#ifndef OOP_TASK2_SOLVEEQUATION_H
#define OOP_TASK2_SOLVEEQUATION_H
#include <cfloat>
#include <cmath>
class SolveEquation{
public:
    std::pair<double, double> rightSolution(int a, int b, int c)
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
};
#endif //OOP_TASK2_SOLVEEQUATION_H
