/*
Dan fajl s tekstom na russkom, vibrat` simvoli kotorie vstrechajutsa 1 raz.
*/
#include <iostream>
#include <algorithm>
#include <string> 
using namespace std;
int main()
{
    std::string text = "dsfgertwertgkjhoiweriocviuwer111jdfh8321";
    for (std::string::iterator it = text.begin(); it != text.end(); ++it) 
    {
        if (std::count(text.begin(), text.end(), *it) == 1)
            std::cout << (*it) << " ";
    }
    system("pause");
    return 0;
}
