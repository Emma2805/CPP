#include<iostream>
using namespace std;
int main()
{
    int a =10;
    int *adda;
    adda = &a;
    int b = 20;
    int *addb;
    addb = &b;
    cout<<"addition ="<<*adda + *addb;
}