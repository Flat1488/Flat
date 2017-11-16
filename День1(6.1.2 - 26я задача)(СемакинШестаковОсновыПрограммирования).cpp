/*
¬ычислить высоты треугольника со сторонами а, №, с.
p=a+b+c/2 - полупериметр
S=sqrt(p*(p-a)*(p-b)*(p-c)) - площадь
ha=2*S/a - высота
*/

#include <iostream>
#include <cmath>
using namespace std;

main()
{
    float  S, p, a, b, c, ha, hb, hc;
    cout << "vvedite a:" << endl;
    cin >> a;
    cout << "vvedite b:" << endl;
    cin >> b;
    cout << "vvedite c:" << endl;
    cin >> c;
    p=a+b+c/2;
    S=sqrt(p*(p-a)*(p-b)*(p-c));
    ha=2*S/a;
    hb=2*S/b;
    hc=2*S/c;
    cout << "ha:  " << ha << endl;
    cout << "hb:  " << hb << endl;
    cout << "hc:  " << hc << endl;
    system("pause");
    return(0);
}

