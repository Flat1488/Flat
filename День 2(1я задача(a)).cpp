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
    
    int first, third;
    
    first = x/100;
    third = x%10;
    
    if (first > third) {
        cout << "first  > third ";
    }
    else if (first < third){
        cout << "third  > first ";
    } else cout << "first  = third " << endl;
    
    system ("pause");
    return (0);
}
