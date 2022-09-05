#include<iostream>
#include<cmath>
using namespace std;
class Triangle
{
    public:
    void area()
    {
        int s,area;
        s=(3+4+5)/2;
        area=sqrt(s*(s-3)*(s-4)*(s-5));
        cout<<"Area of triangle with the given sides is: "<<area;
    }
    void perimeter()
    {
        cout<<"\nPerimeter of triangle with the given sides is: "<<3+4+5;
    }
};
int main()
{
    Triangle t1;
    t1.area();
    t1.perimeter();
}