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
    
    int first, second;
    
    first = x/100;
    second = x/10%10;
        
    
    if (first > second) {
        cout << "second < first ";
    }
    else if (first < second){
        cout << "second  > first ";
        } 
        else cout << "first  = thirt " << endl;
    
    system ("pause");
    return (0);
}
