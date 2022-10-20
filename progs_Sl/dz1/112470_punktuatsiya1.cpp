#include<string>
#include <iostream>

int main()
{
    //.,;:!?
    std::string str;
    int count=0;
    std::getline(std::cin, str);
    for (int i = 0; i < str.size(); i++)
    {
        
        if (str[i]=='.'|| str[i] == ',' || str[i] == '!' || str[i] == '?' || str[i] == ';' || str[i] == ':')
        {
            count += 1;
        }
    }
    std::cout << count;
}

