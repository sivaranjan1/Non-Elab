#include<iostream>
using namespace std;
int main(){
    int n,i;
    int c=0,d=0;
    int arr[20];
    cout<<"enter n : ";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>=0){
            c+=arr[i];
        }
        else{
            d++;
        }
    }
    if(c>=0 && d==0){
         cout<<"the sum of numbers is : "<<c;
    }
    else{
        cout<<"the sum of numbers is : "<<c<<endl;
        cout<<"the negative number entered is not added";
    }
    return 0;
}