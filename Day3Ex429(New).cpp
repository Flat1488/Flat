/*
Ex429 - Abramov str.182-183
*/
#include <iostream>
#include <math.h>
using namespace std;
float  func_max(float x, float y){
       if (x >=y){
              return x;}
       else{ 
             return y;}}    
        main(){int k,l,m,N;
        cout<<"Razmeri masivov"<<endl;
        cin>>N;
        float x[N];
        float y[N];
        float z[N];
        for(int i =0;i<N;i++)
        {x[i]=rand()%10-11;
        y[i]=rand()%10-11;
        z[i]=rand()%10-11;}
                for(int i =0;i<N;i++)
        {cout<<x[i]<<endl;
        cout<<y[i]<<endl;
        cout<<z[i]<<endl;}
        cout<<"--------"<<endl;
        if(func_max( x[0],x[N])>=0)
        cout<<(func_max(y[0],y[N])+func_max(z[0],z[N]))/2<<endl;
        else{cout<<(float)(1+(func_max(x[0],x[N])*func_max(x[0],x[N])))<<endl;}              
               system("pause");
               return 0;}
