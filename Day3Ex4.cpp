/*
Dani dve vershini treugol`nikov, naiti kakaja plochad` bol`she
*/
#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
// площадь треугольника по длинам его сторон
double s_triangle(double a, double b, double c) {
    double p = (a+b+c)/2.0;
    return sqrt(p*(p-a)*(p-b)*(p-c));}
    
    
double s_triangle1(double a1, double b1, double c1) {
    double p1 = (a1+b1+c1)/2.0;
    return sqrt(p1*(p1-a1)*(p1-b1)*(p1-c1));
}
main(){
       double   a,  b,  c  , a1, b1, c1;       
       cin>>a;
       cin>>b;
       cin>>c;
       cin>>a1;
       cin>>b1;
       cin>>c1;
       if(s_triangle(a,  b,  c) > s_triangle1( a1,  b1,  c1))
       {cout<<s_triangle(a,  b,  c)
       else if(s_triangle(a,  b,  c) < s_triangle1( a1,  b1,  c1)){
            cout<<s_triangle(a,  b,  c)
            else{cout<<"ravni";}     }
       }       
      cout<<s_triangle(a,  b,  c) ;  
   system("pause");
}
