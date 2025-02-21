#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
    map<string, int> mp;

    mp["one"] = 1;
    mp["two"] = 2;
    mp["three"] = 3;

    map<string, int>::iterator it = mp.begin();


    // iteração com map
    map<string, int> table;
    map<string, int>::iterator it;
    for (it = table.begin(); it != table.end(); it++)
    {
        std::cout << it->first    // string (key)
                << ':'
                << it->second   // string's value 
                << std::endl;
    }

    return 0;
}