/*
Дано двузначное число. Определить, равен ли квадрат
этого числа учетверенной сумме кубов его цифр. Например,
для числа 48 ответ положительный, для числа 52 — отрицательный.
*/

#include <iostream>
int main(){
    int n, a, b;
    std::cin >> n;
    if (n<10 || n>99)
        return 1;
    a = n / 10;
    b = n % 10;
    if (n*n == 4 * (a*a*a + b*b*b))
        std::cout << "yes\n";
    else
        std::cout << "no\n";
    system ("pause");
    return (0);
}  
