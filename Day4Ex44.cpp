/*
Input random N and Output reverce N
*/
#include <conio.h>
#include <stdio.h>
void f(int n)
{
 if (n!=0) { printf("%d",n%10); f(n/10); }
}
int main()
{
 printf("Input N: ");
 int N;
 scanf("%d",&N);
 f(N);
 getch();
 return 0;
}
