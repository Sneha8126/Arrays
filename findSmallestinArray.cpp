#include<iostream>
using namespace std;

int main(){
    int arr[]={4,5,6,8,9};
    int n = sizeof(arr)/sizeof(int);
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"The smallest element in array : "<<min;
    cout<<endl;

    return 0;
}