#include "Student.h"

void Student :: solveQuadraticEquation(int a, int b, int c, sttype type) {
    if(type == good)
        solution.push_back(SolveEquation::getSolution(a, b, c));
    if(type == mid)
        rand() % 2 == 0 ? solution.push_back(std::make_pair(0, 0)) : solution.push_back(SolveEquation::getSolution(a, b, c));
    if(type == bad)
        solution.push_back(std::make_pair(0, 0));
}
void  Student :: solveTest(EqationsTable *mathTest)
{

    for(auto var:variants)
    {
        auto equation = mathTest->getTask(var);
        solveQuadraticEquation(equation[0], equation[1], equation[2], type);
    }

}
