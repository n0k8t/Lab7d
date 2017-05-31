#include <iostream>
#include <string>
#include <map>
#include <fstream>

using namespace std;

int main()
{
    ifstream file;
    file.open("SomeFile");

    map <string,int> words;
    string word;
    while (file >> word)
    {
        words[word]++;
    }

    map <string,int>::iterator it;
    std::cout<<"Words count:"<<endl;
    for (it = words.begin();it!=words.end();it++)
    {
        std::cout << (*it).first << ": " << (*it).second << endl;
    }
    return 0;
}
