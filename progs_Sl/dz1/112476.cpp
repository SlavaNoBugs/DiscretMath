
#include <iostream>
#include<string>
#include<map>


int main()
{
    std::string input;
    std::getline(std::cin, input);
    int len = input.length();
    std::map<char,char>mp;
    for (int i = 0; i < len; i++)
    {
        if (mp.find(input[i]) == mp.end())
        {
            mp[input[i]] = input[i];
        }
        else
        {
            input.erase(i, 1);
            i--;
            len--;
        }
    }
    std::cout << input;
}

