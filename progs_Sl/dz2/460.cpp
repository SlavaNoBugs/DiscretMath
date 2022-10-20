#include <iostream>
#include<vector>
int main()
{
    std::vector<std::vector<int>>matrix;
    int size,input,count;
    bool fl=true;
    count = 0;
    std::cin >> size;

    for (int i = 0; i < size; i++)
    {
        std::vector<int>line;
        for (int j = 0; j < size; j++)
        {
            std::cin >> input;
            if (input == 1)count += 1;
            line.push_back(input);
        }
        matrix.push_back(line);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((matrix[i][ j] != matrix[j][ i])|| (i == j && matrix[i][j] == 1))
            {
                fl = false;
                break;
            }
            
        }
    }
    if (fl&&count>0)
    {
        std::cout << "YES";
    }
    else
    {
        std::cout << "NO";
    }
}
