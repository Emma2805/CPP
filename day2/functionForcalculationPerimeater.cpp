#include<iostream>
using namespace std;
int perimeterOfRectangle(int a, int b)
{
    int PR = 2*(a+b);
    return PR;
}
double perimeterOfcircle(int r)
{
    double PC = 2*3.14*r;
    return PC;
}
int perimeterOfSquare(int x)
{
    int PS = 4*x;
    return PS;
}
int main()
{
    int PR = perimeterOfRectangle( 10, 20);
    double PC = perimeterOfcircle(7);
    int PS = perimeterOfSquare(9);
    cout << PR <<" "<< PC << " "<< PS;
    return 0;

}