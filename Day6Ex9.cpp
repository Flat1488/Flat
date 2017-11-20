/*
Day6Ex9, book - Semakin,Shestakov OP.
*/
#include <stdio.h>
#include <iostream>
#include <fstream>
#define N 50
using namespace std;
int main()
{
    const char* filename[2] = { "d:\\result1.txt", "d:\\result2.txt" };
    ofstream ofs1(filename[0], ofstream::out);
    ofstream ofs2(filename[1], ofstream::out);
    int* X = new int[N];
    for (int i = 0; i < N; i++)
        X[i] = rand() % N + 1;
    int q = 0;
    while (q < N) ofs1<<X[q++]<<" ";
    ofs1.close();
    int k = 0;
    cout << "k = "; cin>>k;
    int num = 0;
    ifstream ifs(filename[0], ifstream::in);
    while (ifs.peek() >= 0 && ifs>>num)
        if ((num % k) == 0) 
        { cout << num << " "; ofs2<<num<<" "; }
    cout << endl;
    system("pause");
    return 0;
}
