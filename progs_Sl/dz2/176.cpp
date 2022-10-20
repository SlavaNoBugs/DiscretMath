#include<vector>
#include <iostream>

int main()
{
    int size,input,sum=0;
    std::cin >> size;
    std::vector<std::vector<int>>matrix;
    std::vector<int>color;
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
    std::cout << "\n";
    for (int i = 0; i < size; i++)
    {
        std::cin >> input;
        color.push_back(input);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (matrix[i][j] == 1 && color[i] != color[j])sum += 1;
        }
    }
    std::cout << sum/2;
}

