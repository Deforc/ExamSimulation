#include <algorithm>
#include <vector>
#include "Randomizer.h"
#include "Teacher.h"

const int VARIANTS_AMOUNT = 3;

int main() {
    srand(time(nullptr));

    EqationsTable mathTest ("..\\input.txt");

    Teacher teacher;

    std::vector<Student> students;

    std::ifstream studentSurnamesFile("..\\studentSurnames.txt");

    while(!studentSurnamesFile.eof())
    {
        std::string studentSurname;
        studentSurnamesFile >> studentSurname;
        students.emplace_back(studentSurname, Randomizer::randomizerStudent(),
                              teacher.generateVariants(VARIANTS_AMOUNT, mathTest.getMaxTestVariants()));
    }

    for(auto student:students)
    {
        student.solveTest(&mathTest);
        teacher.checkStudentSolution(student.getSurname(), student.getVariants(),
                                     student.getSolution(), mathTest);
    }

    teacher.printTable();



}
