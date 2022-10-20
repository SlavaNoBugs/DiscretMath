#include<vector>
#include <iostream>

int main()
{
    std::vector<std::vector<int>>matrix;
    int size, input;
    std::cin >> size;
    std::vector<int>step;
    for (int i = 0; i < size; i++)
    {
        step.push_back(0);
    }

    for (int i = 0; i < size; i++)
    {
        std::vector<int>line;
        for (int j = 0; j < size; j++)
        {
            std::cin >> input;
            line.push_back(input);
            if(input!=0)step[i] += 1;
        }
        matrix.push_back(line);
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << step[i] << "\n";
    }
}

