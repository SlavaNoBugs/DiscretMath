//#include <iostream>
//#include<string>
//#include<vector>
//
//int main()
//{
//    std::string input;
//    //std::getline(std::cin, input);
//    std::cin >> input;
//    int length = input.length();
//    int lenToOut = length;
//    std::string output = input;
//    int equalSim=0;
//    for (int i = 0; i < length; i++)
//    {
//        for (int j = 0; j < i; j++)
//        {
//            if (output[i] == input[j])
//            {
//                output.erase(i, 1);
//                input.erase(i, 1);
//                equalSim++;
//                length--;
//                i--;
//            }
//        }
//    }
//    std::cout << lenToOut-equalSim;
//}
#include <iostream>
#include<string>
#include<map>


int main()
{

    std::string input;
    std::getline(std::cin, input);
    int len = input.length();
    std::map<char, char>mp;
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
    std::cout << len;

}

