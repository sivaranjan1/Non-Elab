#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char n[100];
    cout<<"enter a string";
    cin>>n;
    int c = strlen(n);
    for(int i=0;i<c;i++){
        if(n[i]=='z'){
            n[i]='a';
        }
    }
    cout<<n;
}