#include <iostream>
#include<vector>
int main()
{
    std::vector<std::vector<int>>matrix;
    int size, input;
    std::cin >> size;

    for (int i = 0; i < size; i++)
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
            if (i == j && matrix[i][j] == 1)
            {
                std::cout << i + 1<<" " << j + 1<<"\n";
            }
            else
            {
                if (matrix[i][j] == 1)
                {
                    std::cout << i + 1 << " " << j + 1 << "\n";
                }
            }



        }
    }
    
}

