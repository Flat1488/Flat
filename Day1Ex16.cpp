/*
Vvesti stoku i vivesti vse krome cifr
*/
#include <iostream>
#include <cctype>
#include <string>


int main()
{
    std::cout << "Put line: ";
    std::string line;
    std::getline(std::cin, line);
 
    for (std::string::iterator p = line.begin(); p < line.end(); )
    {
        std::string::iterator q = p++;
 
        if (isdigit(*q))
        {
            *q = '*';
        }
        else if (!isalnum(*q))
        {
            line.erase(q);
        }
    }
 
    std::cout << line << std::endl;
    system("pause");
}
