#include <iostream>
#include<string>
int main()
{
    std::string str;
    std::getline(std::cin, str);
    bool fl = true;
    int length = str.length();
    if (str[0] == '0')
    {
        fl = false;
    }
    else
    {
        for (int i = 0; i < length; i++)
        {
            int ch = str[i];
            if (str[i] < '0' || str[i] > '7')
            {
                fl = false;
                break;
            }
        }
    }
    if (fl) std::cout << "YES";
    else std::cout << "NO";
    return 0;
}



