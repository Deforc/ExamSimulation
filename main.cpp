#include <algorithm>
#include <vector>
#include "Randomizer.h"
#include "Teacher.h"


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
                                   teacher.generateVariants(3, mathTest.getMaxTestVariants()));
    }

    for(auto student:students)
    {
        student.solveTest(&mathTest);
        teacher.checkStudentSolution(student.getSurname(), student.getVariants(),
                                     student.getSolution(), mathTest);
    }

    teacher.printTable();



}
