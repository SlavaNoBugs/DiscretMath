#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::getline(std::cin, str);
    bool fl = true;
    int length = str.length();
    if ((str[0] >= '0' && str[0] <= '9') || !((str[0] >= 'A' && str[0] <= 'Z') || (str[0] >= 'a' && str[0] <= 'z') || str[0] == '_') || str[0] == NULL)
    {
        fl = false;
    }
    else
    {
        for (int i = 0; i < length; i++)
        {
            if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || str[i] == '_')
            {
                continue;
            }
            else fl = false;
        }
    }
    if (fl)std::cout << "YES";
    else std::cout << "NO";
}