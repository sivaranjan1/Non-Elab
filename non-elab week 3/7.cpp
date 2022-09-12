#include<iostream>
#include<string>
using namespace std;
class car{
    public:
    char carname[50];
    char model[50];
    char mileage[50];

    car(){
        cin>>carname;
        cin>>model;
        cin>>mileage;
    }

    void display(){
        cout<<"Car Name : "<<carname<<endl;
         cout<<"Model : "<<model<<endl;
          cout<<"Mileage"<<mileage;
    }
};

    int main(){
        car s1=car();
        s1.display();
    }
