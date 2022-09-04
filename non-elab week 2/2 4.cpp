#include<iostream>
using namespace std;
int main(){
    int i,j;
    int temp =0;
    int arr[]={23,120,45,6,7,78};
    int s = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<s;i++){
        for(j=i+1;j<s;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"the second smallest number is : "<<arr[1]<<endl;
    cout<<"the highest number is : "<<arr[s-1];
    return 0;
}