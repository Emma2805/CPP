#include <iostream>
using namespace std;
int main()
{
    int x;
    int fact =1;
    cin>>x;
    for(int i=1;i<=x;i++)
     {
         fact = fact*i;
     }
     cout<<fact;
}