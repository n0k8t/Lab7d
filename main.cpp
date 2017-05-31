#include <iostream>
#include <string>
#include <map>
#include <fstream>

int main()
{
    std::ifstream file;
    file.open("SomeFile");

    std::map<std::string,int> words;
    std::string word;
    while (file >> word)
    {
        words[word]++;
    }

    std::map<std::string,int>::iterator it;
    std::cout << "Words count:" << std::endl;
    for (it = words.begin(); it != words.end(); it++)
    {
        std::cout << (*it).first << ": " << (*it).second << std::endl;
    }
    return 0;
}
