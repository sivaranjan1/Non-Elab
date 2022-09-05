#include<iostream>
using namespace std;
class Room
{
    public:
    int l,b,h;
    void getdim()
    {
        cin>>l>>b>>h;
    }
    void area()
    {
        cout<<"\nArea= "<<(2*l)+(2*b)*h;
    }
    void volume()
    {
        cout<<"\nVolume= "<<l*b*h;
    }
};
int main()
{
    Room room1;
    Room room2;
    cout<<"Enter the details of room 1:\n";
    room1.getdim();
    room1.area();
    room1.volume();
    cout<<"\nEnter the details of room 2:\n";
    room2.getdim();
    room2.area();
    room2.volume();
}