/*
����������, �� ������� ��� ������� ����� ������� R ������ ������� ��������, ����������� ������ ����� �.
r=A/2*3.14 - ������ ����� 
�=2*3.14*(r*r) - ������� �����
Ssektor=(1/2)*p*r - ������� ������� �����
Streug=sqrt(p*(p-a)*(p-b)*(p-c)) - ������� �����
Ssegm=Ssektor-Streug - �������
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
