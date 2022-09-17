#include <iostream>
#include<string>
int main()
{
    std::string str, result = "";
    std::cin >> str;    
    int* mas = new int[10];
    for (int i = 0; i < str.size(); i++) 
    {
        switch (str[i]) 
        {
            case '0': 
            {
                mas[0] = 1;
                break;
            }
            case '1':
            {
                mas[1] = 1;
                break;
            }
            case '2':
            {
                mas[2] = 1;
                break;
            }
            case '3':
            {
                mas[3] = 1;
                break;
            }
            case '4':
            {
                mas[4] = 1;
                break;
            }
            case '5':
            {
                mas[5] = 1;
                break;
            }
            case '6':
            {
                mas[6] = 1;
                break;
            }
            case '7':
            {
                mas[7] = 1;
                break;
            }
            case '8':
            {
                mas[8] = 1;
                break;
            }
            case '9':
            {
                mas[9] = 1;
                break;
            }
        }
    }
    for (int i = 0; i < 10; i++) 
    {
        if (mas[i] == 1) 
        {
            result += i + 48;
        }
    }
    if (result == "")std::cout << "NO";
    else std::cout << result;
}


