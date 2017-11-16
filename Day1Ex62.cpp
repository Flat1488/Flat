/*
Vvesti stroku i vivesti tol`ko kirilicu
*/
#include <iostream> 
#include <cstdlib>
using namespace std;
 
int main()
{
setlocale( LC_ALL,"Russian" );

int count=0;

char str[100];
cin.getline(str,100);
for(int i=0; i < strlen(str) ;i++){
  if(str[i] >= '160' && str[i] <= '222' || str[i] == '132')
      count++;
      }
cout << "\n" << count;
    system("pause");
    return 0;
}
