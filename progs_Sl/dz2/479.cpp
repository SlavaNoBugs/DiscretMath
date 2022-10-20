#include<vector>
#include <iostream>

int main()
{
    int size, reb, input1, input2, sum = 0;
    std::vector<std::vector<int>>matrix;
    std::vector<std::vector<int>>prov;
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
            matrix[input1 - 1][input2 - 1] += 1;
        }
        else
        {
            matrix[input1 - 1][input2 - 1] += 1;
            matrix[input2 - 1][input1 - 1] += 1;
        }

    }
    int res = 1;

    for (int i = 0; i < size; i++)

        for (int j = i + 1; j < size; j++)

            for (int k = 0; k < size; k++)

            {

                if (k == i || k == j) continue;
                if (matrix[i][k] && matrix[k][j]) res &= matrix[i][k];
            }
    if (res == 1) std::cout<<("YES");

    else std::cout<<("NO");
    /*for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }*/
}
