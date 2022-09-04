#include<iostream>
#include<cstring>
using namespace std;
void reverse(char s[20],int n){
    int i;
    for(i=n-1;i>=0;i--)
        cout<<s[i];
    
}
int main(){
    char s[20]="1234abcd";
    int n = sizeof(s)/sizeof(s[0]);
    reverse(s,n);
    return 0;
}