#include<iostream>
using namespace std;

int main(){
    int n[10]={2000,500,200,100,50,20,10,5,2,1};
    int a;
    cout<<"Enter the amount";
    cin>>a;
    for(int i=0;i<10;i++){
        cout<<n[i]<<" = "<<a/n[i]<<endl;
        a=a%n[i];
    }
}