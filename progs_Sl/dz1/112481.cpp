#include <string>
#include <iostream>
#include<map>
int main()
{
    std::string str1;
    std::string str2;
    std::map<int, int>mp;
    
    bool fl = true;
    for (int i = 65; i < 91; i++)
    {
        mp[i] = 0;
    }
    for (int i = 97; i < 123; i++)
    {
        mp[i] = 0;
    }
    

    std::getline(std::cin, str1);
    std::getline(std::cin, str2);
    str1 = str1 + str2;
    int len = str1.length();

    for (int i = 0; i < len; i++)
    {
        mp[(int)str1[i]] = 1;
    }
    for (int i = 97; i < 123; i++)
    {
        if (mp[i] == 1)
        {
            mp[i - 32] = 1;
        }
    }
    str1 = "";
    for (int i = 65; i < 91; i++)
    {
        if (mp[i] == 0) 
        {
            str1 += (char)i;
        }
    }
    if (str1.length() != 0)
    {
        std::cout << str1;
    }
    else
    {
        std::cout << 0;
    }
}
