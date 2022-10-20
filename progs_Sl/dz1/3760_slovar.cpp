#include <iostream>
#include<string>
#include<map>
int main()
{
    int count;
    std::cin >> count;
    std::string word;
    std::string str;
    std::string substr1="";
    std::string substr2="";
    
    
    std::map<std::string, std::string> dict;
    

    for (int i = 0; i < count+1; i++) 
    {
        std::getline(std::cin, str);
        
        substr1.insert(0, str, 0, str.find(' '));
        substr2.insert(0, str, str.find(' ') + 1, str.size());

        dict[substr1] = substr2;
        dict[substr2] = substr1;
        substr1 = "";
        substr2 = "";
    }
    std::cin >> word;
    std::cout << dict[word];


    


    
    
}

