#include <iostream>
using namespace std;
double perimeter(double a, double b)
{
    int PR = 2*(a+b);
    return PR;
}
double perimeter(double r)
{
    double PC = 2*3.14*r;
    return PC;
}
double perimeter(double x,double y , double z)
{
    int PT = x+y+z;
    return PT;
}
int main()
{
    
    double P = perimeter(7);
    
    cout<<P;
    return 0;

}