#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int key){
for(int i=0;i<n;i++){
    if(arr[i]==key){
        return i;
    }
}
return -1;
}

int main(){
    int arr[] = {7,5,9,6,1};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter the key to search : ";
    cin>>key;
    cout<<"The key at index : "<<linearSearch(arr,n,key)<<endl;

    return 0;
}