//Составить программу вычисления значения функции y=(a*a+1)/sqrt(a*a+1) , при любом значении a.

#include <iostream>
#include <cmath>
using namespace std;

main()
{
    float y,a;
                             
    cout << "vvedite a: ";	
    cin >> a;
      if (sqrt(a*a+1)!=0){
                          
       y=(a*a+1)/sqrt(a*a+1) ;
    cout << "znachenije y: " << y << endl;}
    else {
         cout << "div. by 0";
}
    system ("pause");
    return 0;
}
