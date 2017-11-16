/*
Vvesti stroku i vivesti tol`ko latinskie bukvi
*/
#include <iostream>
using namespace std;
int main()
{
    char s[255];
    int i=0;
    cout<<"Enter line:\n";
    cin.getline(s,255,'\n');
    while (i<=strlen(s)) {
        if ( (*(s+i)>=65 && *(s+i)<=90) || (*(s+i)>=97 && *(s+i)<=122) ) 
            cout<<*(s+i);
        i++;
    }
    system("pause");
    return 0;
}
