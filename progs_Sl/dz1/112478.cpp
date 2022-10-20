#include <iostream>
#include<string>
#include<set>
#include<map>
int main()
{
    std::string input;
    std::getline(std::cin, input);
    int len = input.length();
    std::multimap<char, int>mp;
    std::set<char>out;
    bool fl = false;
    for (int i = 0; i < len; i++)
    {
        mp.insert({ input[i],0 });
    }
    //std::map <char, int> ::iterator it = mp.begin();
    for (int i = 0;i<len; i++) 
    { 
        if (mp.count(input[i]) == 1)
        {
            out.insert(input[i]);
            fl = true;
        }
    }
    if (fl)
    {
        std::set <char> ::iterator it2 = out.begin();
        for (int i = 1; it2 != out.end(); i++, it2++) {
            std::cout << *it2;
        }
    }
    else
    {
        std::cout << "NO";
    }
    
}
