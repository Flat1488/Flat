#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std; 
main () { 
float x, a ; 
cout << "VVedite x" << endl; 
cin >> x; 
if (x>=8) { 
a = -1*x*x+x-9;
} 
else{
     a = 1./(x*x*x*x-6);} 
cout << "F(x)="<<a << endl;      
     
system("pause"); 
return 0; 
}
