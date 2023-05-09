#include "Teacher.h"
std::vector<int> Teacher :: generateVariants(const int variantAmount, int maxTestVariants)
{
    std::vector<int> variantList;
    for(int i = 0; i < variantAmount; i++){
        int newVariant = Randomizer::randomizerVariant(maxTestVariants);
        if (std::find(variantList.begin(), variantList.end(), newVariant) != variantList.end()) {
            i--;
        }
        else {
            variantList.push_back(Randomizer::randomizerVariant(maxTestVariants));
        }

    }

    return variantList;
}
void Teacher :: checkStudentSolution(const std::string& studentSurname, const std::vector<int>& studentVariants,
                          const std::vector<std::pair<double,double>>& studentSolutions, EqationsTable mathTest)
{
    resultTable.emplace_back(studentSurname, std::make_pair(0, 0));
    for(int i = 0; i < studentSolutions.size(); i++)
    {

        auto equation = mathTest.getTask(studentVariants[i]);
        solveQuadraticEquation(equation[0], equation[1], equation[2], type);
        auto teacherSolution = solution[i];

        if( (studentSolutions[i].first == teacherSolution.first) && (studentSolutions[i].second == teacherSolution.second) )
        {
            resultTable.back().second.first++;
        }
        resultTable.back().second.second++;
    }
}

void Teacher :: printTable()
{
    for(const auto& student:resultTable)
    {
        std::cout << student.first << " " << student.second.first << "/" << student.second.second << std::endl;
    }
}