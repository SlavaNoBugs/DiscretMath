#include <iostream>
#include<vector>
int main()
{
    int size, reb,input1,input2;
    bool fl=true;
    std::vector<std::vector<int>>matrix;
    std::cin >> size >> reb;

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
        if (input1 == input2)
        {
            matrix[input1-1][input2-1] += 1;
        }
        else
        {
            matrix[input1-1][input2-1] += 1;
            matrix[input2-1][input1-1] += 1;
        }
        
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (matrix[0][0] != matrix[i][j])
            {
                fl = false;
            }
        }
    }

    if (fl)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
}
