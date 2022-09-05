#include<iostream>
using namespace std;
class Circle
{
    int radius;
    public:
    Circle()
    {
        cout<<"Enter the radius:"<<endl;
        cin>>radius;
    }
    void perimeter()
    {
        cout<<"\nPerimeter: "<<2*3.14*radius;
    }
    void area()
    {
        cout<<"\nArea: "<<3.14*radius*radius;
    }
};
int main()
{
    Circle c1;
    c1.perimeter();
    c1.area();
}