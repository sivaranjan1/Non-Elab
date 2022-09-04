#include<iostream>
using namespace std;
int main(){
    int i;
    int arr[]={23,12,45,6,78};
    int s = sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for(i=1;i<s;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"the largest element in in the array is : "<<max;
    return 0;
}