#include <iostream>
using namespace std;
int simpleinterest( int p, int t , int r)
{
    int SI= (p*t*r)/100;
    return SI;
}
int main()
{
    int x , y , z;
    cin>>x>>y>>z;
    cout<<simpleinterest(x,y,z);
    return 0;
}