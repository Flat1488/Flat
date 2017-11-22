/*
6.	Dano dva vporjadkovanih za zrostannjam masivi A(m) та B(n). 
Otrimati z nih za dopomogoju zlittja vporjadkovanij za zrostannjam masiv С; elementi, scho spivpadajut`, vstavljati 1 raz. 
Pidrahuvati kil`kist` elementiv v masivi С.
*/
#include <iostream> 
using namespace std;
int main(){
int N;
cout<<"Vvedite kolichestvo elementov v masivah"<<endl;
  cin>>N;
  int b[N];
  int c[N];
  cout<<"Vvodite elementu  b[N] potom c[N]"<<endl;
  for(int i =0;i<N;i++)
  {cin>>b[i];
          }   
          cout<<"c[N]:"<<endl;
  for(int i =0;i<N;i++)
  {cin>>c[i];
          }           
     //int b[N]={1,2,3,5,6};
    // int c[N]={8,9,0,1,5,4,2};
      int *d=new int [N+N];
     memcpy(d,b,N*sizeof(b[0]));
     memcpy(d+N,c,N*sizeof(c[0])); 
     for(int i=0;i<N+N;++i){
         std::cout<<*(d+i)<<" ";}
    delete [] d;
    system("pause");
    return 0;
}
