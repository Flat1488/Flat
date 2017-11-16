/*
ƒано трехзначное число. ќпределить, кака€ из его цифр
больше:
а) перва€ или последн€€;
б) перва€ или втора€;
в) втора€ или последн€€.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Input numer from 100-999: ";
    int x;
    cin >> x;
    
    int second, thirt;
    
    second = x/10%10;
    thirt = x%10;
    
    cout <<  second ;
    cout << thirt ;
    
    if (second > thirt) 
        cout << "thirt < second ";
    else 
         if (thirt > second)
          cout << "thirt  > second ";
        else cout << "first  = second " << endl;
    
    system ("pause");
    return (0);
}
