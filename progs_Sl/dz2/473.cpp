#include<vector>
#include <iostream>

int main()
{
    int size, input1,input2,reb;
    std::vector<std::vector<int>>matrix;
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
        std::cin >> input1 >> input2;
        matrix[input1 - 1][input2 - 1] += 1;
    }


    for (int j = 0; j < size; j++)
    {
        int sum_in = 0;
        int sum_out = 0;
        for (int i = 0; i < size; i++)
        {
            if (matrix[i][j] == 1)sum_in += 1;
            if (matrix[j][i] == 1)sum_out += 1;
        }
        std::cout << sum_in << "\n" << sum_out << "\n";
    }
}
