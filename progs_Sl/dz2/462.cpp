#include<vector>
#include <iostream>

int main()
{
    std::vector<std::vector<int>>matrix;
    int size, input;
    double count;
    bool fl = true;
    count = 0;
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
            if (i==j&&matrix[i][j] == 1)
            {
                count += 1;
            }
            else
            {
                if (matrix[i][j] == matrix[j][i] && matrix[i][j] == 1)
                {
                    count += 0.5;
                }
            }
            
            

        }
    }
    std::cout << count;
}

