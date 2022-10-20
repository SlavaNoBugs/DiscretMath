#include <iostream>
#include<string>
int main()
{
    std::string str;
    std::getline(std::cin, str);
    int length = str.size();
    bool fl = true;
    if (str[0] == '0' || (str[0] < '0' || (str[0] > '9' && str[0] < 'A') || (str[0] > 'F' && str[0] < 'a') || str[0] > 'f') || (str[0] == ' ') || (str[0] == NULL)) fl = false;
    else 
    {
        for (int i = 1; i < length; i++)
        {
            if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'F') || (str[i] >= 'a' && str[i] <= 'f'))
            {
                continue;
            }
            else fl = false;
            
        }
    }
    if (fl)std::cout << "YES";
    else std::cout << "NO";
    return 0;
}

