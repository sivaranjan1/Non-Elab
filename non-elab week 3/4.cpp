#include<iostream>
using namespace std;

class Circle{
    public:
    float radius;
    float pi = 22/7;
    float diameter= radius*radius;
    
    void area(int r){
        radius=r;
        int are = pi*(diameter);
        cout<<'The area of the circle is : '<<are;
    }

    void perimeter(int r){
        radius=r;
        int perimetr=2*pi*radius;
        cout<<'The perimeter of the circle is : '<<perimetr;
    }

};

int main(){
    Circle s1;
    s1.area(12);
    s1.perimeter(12);

}