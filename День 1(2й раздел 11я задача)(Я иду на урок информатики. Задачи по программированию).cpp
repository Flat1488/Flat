//Дано трехзначное число. Найти число, полученное при перестановке первой и второй цифр заданного числа.

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
 int rez, number, n1, n2, n3;


cout << "vvedite 3-h znachnoje chislo: ";
cin >> number;
 if (number <= 999 && number > 99)
    {
      n1=number%10;
      number/=10;
      n2=number%10;
      number/=10;
      n3=number%10;
      number/=10;
      rez=n1*100+n2*10+n3;

    cout << "rez-t: " << rez;
  
  }
  
  system ("pause");
  return 0;

}

