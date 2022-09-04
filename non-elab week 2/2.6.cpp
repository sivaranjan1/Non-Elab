#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char n[100];
    int a,b=0;
    cout<<"Enter the no of strings";
    cin>>a;
    while(b<a){
    for(int i=0;i<1;i++){
        cin>>n[i];
        toupper(n[0]);
        break;
         }
         b++;
    }

    cout<<n;
}