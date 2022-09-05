#include<iostream>
using namespace std;
class Average
{
    public:
    static void ave(int a,int b,int c)
    {
        cout<<"Average is: "<<(a+b+c)/3;
    }
};
int main()
{
    cout<<"Enter 3 numbers:\n";
    int p,q,r;
    cin>>p>>q>>r;
    Average::ave(p,q,r);
}