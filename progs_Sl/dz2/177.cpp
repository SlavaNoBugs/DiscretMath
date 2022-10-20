#include<vector>
#include <iostream>

int main()
{
    int size, input, sum = 9999999 , sum_now, z, x, y;
    std::cin >> size;
    std::vector<std::vector<int>>matrix;
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
            if (i != j)
            {
                for (int k = 0; k < size; k++)
                {
                    if (k != i && k != j && (sum_now = matrix[i][j] + matrix[j][k] + matrix[k][i]) < sum)
                    {
                        sum = sum_now;
                        z = i, x = j, y = k;
                    }
                    
                }
            }
        }
    }
    std::cout << x + 1 << " " << y + 1 << " " << z + 1;
}

