/*
Ex22 Kassa. V masive K(n), v porjadke ubivanija predstavleni dostoinstva
debejnih znakov valjutnoy sistemi nekotoroj strani, najti max i min kurs,
pischitat` vidachu nalichnih.
*/
#include <iostream>
#include <ctime>
using namespace std;
int main()
{cout<<"Convertatro valut 2000"<<endl;
    int min =0;
    int max =0;
    srand(time(NULL));
    int sum = 0;
    int Z;
    cout<<"SkoLbko kursov valyt???"<<endl;
    cin >> Z;
    int a[Z];

    for (int i = 0; i < Z; i++)
    {
            a[i] = rand() % 100;
            cout << a[i] << " ";
        }
    min = a[0];
    max = a[0];
    for (int i = 0; i < Z; i++)
    {
            if (a[i] < min) min = a[i];
            if (a[i] > max) max = a[i];
            }
    cout << "\nmin = " << min << endl << "max = " << max << endl;
    cout<<"Vvedite symy deneg"<<endl;
float m;
cin>>m;
cout<<" min "<<m*min<<" bablo odinic(Valik dolars)"<<endl;
cout<<" max "<<m*max<<" bablo odinic(Valik dolars)"<<endl;    
    system("pause");
    return 0;
}
