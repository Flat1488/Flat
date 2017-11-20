/*
all lucky tickets
*/
#include <iostream>
#include <iomanip>
using namespace std;
bool s(int n)
{   int a = n / 1000;
    int b = n % 1000;
    int sa = 0, sb = 0;
    for (int i = 0; i < 3; ++i)
    {   sa += a % 10;
        sb += b % 10;
        a /= 10;
        b /= 10;}
    if (sa == sb) return true;
    return false;}
int main()
{for (int i = 0; i < 1000000; ++i)
        if (s(i)) cout << setw(6) << setfill('0') << i << endl;
    return 0;
    system("pause");}
