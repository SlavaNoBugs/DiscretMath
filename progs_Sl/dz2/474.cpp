#include<vector>
#include <iostream>

int main()
{
    int size, input;
    int sum_ist=0,sum_stok = 0;
    std::vector<std::vector<int>>matrix;
    std::vector<int>out_ist;
    std::vector<int>out_stok;
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
    for (int i = 0; i < size; i++)//заполняем нулями вектор вывода
    {
        out_ist.push_back(0);
        out_stok.push_back(0);
    }

    for (int i = 0; i < size; i++)
    {
        int sum_in = 0;
        int sum_out = 0;
        for (int j = 0; j < size; j++)
        {
            if (matrix[j][i] == 1)sum_in += 1;
            if (matrix[i][j] == 1)sum_out += 1;
        }
        if (sum_out == 0)
        {
            out_ist[i] = 1;
            sum_ist += 1;
        }
        if (sum_in == 0)
        {
            out_stok[i] = 1;
            sum_stok += 1;
        }
    }
    std::cout << sum_stok<<"\n";
    for (int i = 0; i < size; i++)
    {
        if (out_stok[i] != 0)std::cout << i+1 << "\n";
    }
    std::cout << sum_ist<<"\n";
    for (int i = 0; i < size; i++)
    {
        if (out_ist[i] != 0)std::cout << i+1 << "\n";
    }
    
}

