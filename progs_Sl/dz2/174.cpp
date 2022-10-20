#include<vector>
#include <iostream>

int main()
{
    int size, input;
    std::vector<std::vector<int>>matrix;
    double sum = 0;
    std::cin >> size;
    for (int i = 0; i < size; i++)//ввели матрицу
    {
        std::vector<int>line;
        for (int j = 0; j < size; j++)
        {
            std::cin >> input;
            line.push_back(input);
        }
        matrix.push_back(line);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j && matrix[i][j]==1)sum += 1;
            if (matrix[i][j] == 1)sum += 0.5;
        }
    }
    std::cout << sum;
}


