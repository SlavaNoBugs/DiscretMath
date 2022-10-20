#include<vector>
#include <iostream>

int main()
{
    std::vector<int>step;
    int size, reb, input, input2;
    std::cin >> size;
    std::cin >> reb;

    for (int i = 1; i <= size+1; i++)
    {
        step.push_back(0);
    }
    for (int i = 0; i < reb; i++)
    {
        std::cin >> input;
        std::cin >> input2;
        step[input] += 1;
        step[input2] += 1;
    }
    for (int i = 1; i <= size; i++)
    {
        std::cout << step[i] << "\n";
    }
}
