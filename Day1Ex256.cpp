/*
Day1Ex256, book - Abramov
*/
using namespace std;
int main ()
{
    string str;
    cout<<"Vvedite stroky simvolov, soderjajyu pervyy i posledniy zapyatyty = "<<endl;
    cin>>str;
    cout<<endl;
    cout<<"Chislo mesta, gde nahoditsa pervaya zapyataya = ";
    cout<<str.find_first_of(',')<<endl;
    cout<<"Chislo mesta, gde nahoditsa poslednyaya zapyataya = ";
    cout<<str.find_last_of(',')<<endl;
    system("Pause");
    return 0;
}
