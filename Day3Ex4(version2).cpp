/*
Dani dve vershini treugol`nikov, naiti kakaja plochad` bol`she
*/
#include <math.h>
#include <iostream>
using namespace std;
double Area(double X[],double Y[])
{
    return 0.5*fabs((X[1]-X[0])*(Y[2]-Y[0])-(X[2]-X[0])*(Y[1]-Y[0]));
}
 
int main(int argc, char* argv[])
{
 
    double X1[]={1,3,3};
    double Y1[]={1,6,3};
 
    double X2[]={2,3,6};
    double Y2[]={1,3,4};
 
    double S1,S2;
 
    S1=Area(X1,Y1);
    S2=Area(X2,Y2);
 
    cout << "S1=" << S1 << endl;
    cout << "S2=" << S2 << endl;
 
    if (fabs(S1-S2) <= 0.000001)
        cout << "S1 = S2" << endl;
    else
    {
        if (S1 > S2)
           cout << "S1 > S2";
        else
           cout << "S1 < S2";
    }
 
    cout << endl;
 
    system("pause");
}
