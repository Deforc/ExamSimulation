#include "Student.h"

void Student :: solveQuadraticEquation(int a, int b, int c) {
    if(type == good)
        addSolution(rightSolution(a, b, c));
    if(type == mid)
        rand() % 2 == 0 ? addSolution(std::make_pair(0, 0)) : addSolution(rightSolution(a, b, c));
    if(type == bad)
        addSolution(std::make_pair(0, 0));
}
void  Student :: solveTest(EqationsTable *mathTest)
{

    for(auto var:variants)
    {
        auto equation = mathTest->getTask(var);
        solveQuadraticEquation(equation[0], equation[1], equation[2]);
    }

}
