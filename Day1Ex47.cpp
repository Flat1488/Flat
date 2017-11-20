/*
Vvesti predlojenija razdelennije tochkami i zamenit` tochki na probel
*/
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char text[100];
    cout<<"Vvedite text sostoyawi` iz predlojeni`, razdelyaemuh tochkami= "<<endl;
    cin>>text;
    for(char *p = text; *p; p++)
    if(*p=='.')
    {
        *p=' ';
    }
    
    text[0] = toupper(text[0]);
    cout<<"Vuvod texta = ";
    cout<<text<<endl;
    system("pause");
    return 0;
}
