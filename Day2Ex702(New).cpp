/*705. Dani kvadratnie A è B porjadka n (2x2,3x3...nxn)
Poluchit` matrici A(b-E)+C, gde Å-edenichnaja matrica porjadka n
, à elementi matrici Ñ po formule:
C[i,j]=1/(1+j), i,j=1,2...n
*/
#include <iostream>
#include <cstdlib>
#include<time.h>
#include <iomanip>
using namespace std;
const int N =3;
const int M =3;
int main()
{float a[N][N];
float b[N];
float abZadanieA[N][N];
srand( time(0) );
  for (int i = 0; i < N; i++) 
  for (int j = 0; j < N; j++){a[i][j]=rand()%10;}
    
  for (int i = 0; i < N; i++) 
 {b[i]=rand()%10;}
    cout<<"A[][]"<<endl;
    for (int i = 0; i < N; i++) 
    for (int j = 0; j < N; j++) 
 {cout<<a[i][j]<<endl;}	
   cout<<"b[]"<<endl;
    for (int i = 0; i < N; i++) 
 {cout<<b[i]<<endl;} 	
for (int i = 0; i < N; i++) //zadanie 1 a)
 {
         if(1/(i*i+2)!=0){b[i]=1/(i*i+2);}
         else{}
}
  for (int i = 0; i < N; i++) 
    for (int j = 0; j < N; j++) 
 {abZadanieA[i][j]=a[i][j]*b[i];
 cout<<abZadanieA[i][j]<<endl;}	
    system("pause");
    return 0;
}
