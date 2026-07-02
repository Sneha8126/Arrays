#include<iostream>
using namespace std;

int main(){
    int arr[]={4,5,68,9};
    int n = sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}