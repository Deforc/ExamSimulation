#ifndef OOP_TASK2_EQATIONSTABLE_H
#define OOP_TASK2_EQATIONSTABLE_H
#include <array>
#include <fstream>
class EqationsTable{
public:
    EqationsTable(std::string fileName)
    {
        std::ifstream tasksFile(fileName);
        int a, b, c;
        while(!tasksFile.eof())
        {
            tasksFile >> a >> b >> c;
            tasks.push_back({a, b, c});
        }
    }

    std::array<int, 3> getTask(int numVariant)
    {
        return tasks[numVariant];
    }

    int getMaxTestVariants()
    {
        return tasks.size();
    }

private:
    std::vector<std::array<int, 3>> tasks;
};

#endif //OOP_TASK2_EQATIONSTABLE_H
