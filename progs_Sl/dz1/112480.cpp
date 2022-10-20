#include <string>
#include <set>
#include <algorithm>
#include <iterator>
#include<iostream>
int main()
{
    std::string s1, s2;
    std::getline(std::cin, s1);
    std::getline(std::cin, s2);
    std::multiset<char> a, b;
    std::set<char> intersection;
    for (int i = 0; i < s1.length(); ++i)
    {
        a.insert(s1[i]);
    }
    for (int i = 0; i < s2.length(); ++i)
    {
        b.insert(s2[i]);
    }
    std::set_intersection(a.begin(), a.end(), b.begin(), b.end(), std::inserter(intersection, intersection.begin()));
    if (intersection.size() != 0)
    {
        std::set <char> ::iterator it = intersection.begin();

        for (int i = 1; it != intersection.end(); i++, it++) {
            std::cout << *it;
        }
    }
    else std::cout << "NO";
}