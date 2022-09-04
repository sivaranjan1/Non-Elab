#include <iostream>
using namespace std;

int max(int a,int b,int c){
    if(a<b && a<c){
        cout<<"The Minimum number is :"<<a;
    }
    else if(b<a && b<c){
        cout<<"The Minimum number is :"<<b;
    }
    else{
        cout<<"The Minimum number is :"<<c;
    }
}
int main(){
    int a,b,c;
    cout<<"Enter three numbers";
    cin>>a>>b>>c;
    max(a,b,c);
    return 0;
}