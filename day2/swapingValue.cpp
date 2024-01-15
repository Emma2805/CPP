#include<iostream>
using namespace std;
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout<<"inside "<<endl;
    cout<<*a<<" "<<*b <<endl;
}
int main()
{
    int a = 10 , b = 20;
    swap(&a,&b);
    cout<<"outside "<<endl;
    cout<<a<< " "<<b<<endl;
    return 0;

}