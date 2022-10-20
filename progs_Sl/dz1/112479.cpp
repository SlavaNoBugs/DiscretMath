#include <iostream>
#include<string>
int main()
{
    std::string input;
    std::getline(std::cin, input);
    //std::cin >> input;
    int num[10] = {0};
    int length = input.length();
    bool fl = false;
    for (int i = 0; i < length; i++) 
    {
        switch (input[i])
        {
        case '0':
        {
            num[0] += 1;
            break;
        }
        case '1':
        {
            num[1] += 1;
            break;
        }
        case '2':
        {
            num[2] += 1;
            break;
        }
        case '3':
        {
            num[3] += 1;
            break;
        }
        case '4':
        {
            num[4] += 1;
            break;
        }
        case '5':
        {
            num[5] += 1;
            break;
        }
        case '6':
        {
            num[6] += 1;
            break;

        }
        case '7':
        {
            num[7] += 1;
            break;
        }
        case '8':
        {
            num[8] += 1;
            break;
        }
        case '9':
        {
            num[9] += 1;
            break;
        }
        }
    }
    for (int i = 9; i >= 0; i--)
    {
        if (num[i] == 0)
        {
            fl = true;
        }
    }
    if (fl)
    {
        for (int i = 9; i >= 0; i--)
        {
            if (num[i] == 0)
            {
                std::cout<< i;
            }
        }
    }
    else
    {
        std::cout << "NO";
    }
}
