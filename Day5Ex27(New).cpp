/*
Dani neskol`ko gor, vivesti gori kotorie vishe 3000 metrov.
TUT JA USAL STRUCTURU DLJA STUDENTOV NO POMENJAL POD ETU ZADACHU.
*/
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<time.h>
#include<cstdlib>
using namespace std;
const int N =11;
const int N2 =1;
struct Tfullname{
       char Imya[100];
       };
       struct Tstudent{
       Tfullname a;
       int razmer;       
       };        
main(){ 
        srand(time(NULL));
        Tstudent student[N];
for (int i =0;i<N;i++)
{cout<<"---"<<" Gora No "<<"["<<i<<"]"<<":"<<"---\n";
cout<<"Vedit Imya goru:";
    cin>>student[i].a.Imya;    
    for (int j =0;j<N2;j++){
        student[i].razmer=rand()%5000; }
}
cout<<"Razmer vsih gor"<<endl;
for (int i =0;i<N;i++)
{cout<<student[i].a.Imya<<"   ";
 
    
    for (int j =0;j<N2;j++){
        cout<<student[i].razmer<<" "; 
           }cout<<endl;
}
cout<<"Gori>=3000"<<endl;
 for (int i =0;i<N;i++){
     if(student[i].razmer>=3000){
     cout<<student[i].a.Imya<<" ";
        cout<<student[i].razmer<<endl; }
           }

	       system("pause");
       return 0;
       
       
       }
