/*
Определить, во сколько раз площадь круга радиуса R больше площади сегмента, отсеченного хордой длины А.
r=A/2*3.14 - радиус круга 
А=2*3.14*(r*r) - Площадь круга
Ssektor=(1/2)*p*r - площадь сектора круга
Streug=sqrt(p*(p-a)*(p-b)*(p-c)) - площадь треуг
Ssegm=Ssektor-Streug - сегмент
NEPONJATNAJA HREN`=3.14/(3.14-2*arccos(A/2*R)-(A/2*R)*sqrt(1-(A/2*R)*(A/2*R))


*/
#include <iostream>
#include <cmath>
using namespace std;

main()
{
      float R, A, K;
      
        cout << "vvedite R:" << endl;
        cin >> R;
        cout << "vvedite A:" << endl;
        cin >> A;
        K=3.14/(3.14-2*acos(A/2*R)-(A/2*R)*sqrt(1-(A/2*R)*(A/2*R)));
if(3.14/((3.14-2*acos(A/2*R)-(A/2*R)*sqrt(1-(A/2*R)*(A/2*R))))>0){
                                  
      K=3.14/(3.14-2*acos(A/2*R)-(A/2*R)*sqrt(1-(A/2*R)*(A/2*R)));
      cout << "K:  " << K << endl;}
    else {
         
         cout << "ERROR:  " ;
        
}
system ("pause");
return (0);
}
