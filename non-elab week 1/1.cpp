#include<iostream>
using namespace std;

int main(){
    int a,b;
    int c;
    cout<<"MENU"<<endl;
    cout<<"1.Add"<<endl;
    cout<<"2.Subtract"<<endl;
    cout<<"3.Mulitiply"<<endl;
    cout<<"4.Divide"<<endl;
    cout<<"5.Modulus"<<endl;
    cout<<"Enter your choice : ";
    cin>>c;
    cout<<"Enter your no 1 numbers:";
    cin>>a;
    cout<<"Enter your no 1 numbers:";
    cin>>b;
    switch(c){
        case '1':
        cout<<"Result : "<< a + b;
        break;
        case '2':
        cout<<"Result : "<< a - b;
        break;
        case '3':
        cout<<"Result : "<< a * b;
        break;
        case '4':
        cout<<"Result : "<< a / b;
        break;
        case '5' :
        cout<<"Result : "<< a % b;
        break;
        default :
        cout<<"invalid operation";
        break;
    }
    return 0;
}