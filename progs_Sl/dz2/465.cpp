#include<vector>
#include <iostream>

int main()
{
    std::vector<std::vector<int>>matrix;
    int size,reb,input,input2;
    std::cin >> size;
    std::cin >> reb;

    for (int i = 0; i < size; i++)
    {
        std::vector<int>line;
        for (int j = 0; j < size; j++)
        {
            line.push_back(0);
        }
        matrix.push_back(line);
    }
    for (int i = 0; i < reb; i++)
    {
        std::cin >> input;
        std::cin >> input2;
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (input-1 == i && input2-1 == j)
                {
                    matrix[i][j] = 1;
                    matrix[j][i] = 1;
                }
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            std::cout << matrix[i][j] << " ";

            if (j == size-1)std::cout << std::endl;
        }
    }
    
}
