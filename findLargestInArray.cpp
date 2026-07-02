#include<iostream>
using namespace std;

int main(){
    int arr[]={4,5,6,8,9};
    int n = sizeof(arr)/sizeof(int);
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<"The largest element in array : "<<max;
    cout<<endl;

    return 0;
}