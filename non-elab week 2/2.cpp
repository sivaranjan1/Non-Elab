#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    if(a>=0){
        if(a==0){
            cout<<"the number is zero";
        }
        else{
            cout<<"The number is positive";
        }
    }
    else{
            cout<<"The number is negative";
        }
        return 0;
}