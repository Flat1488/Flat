/*
���� ����������� �����. ����������, ����� �� ��� ����
������:
�) ������ ��� ���������;
�) ������ ��� ������;
�) ������ ��� ���������.
*/

#include <iostream>
#include <cmath>
using namespace std;

main()
{

int a, b;
cout << "vvedite a: ";	
    cin >> a;
cout << "vvedite b: ";	
    cin >> b;    
a = a/100;  
b = (b/10)%10; 
if (a>b) cout<<"first";
else if (a<b) cout<<"second";
else cout<<"the same";
system ("pause");
return (0);

}
