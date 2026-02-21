#include<iostream>
#include<algorithm>
using namespace std;

int* InsertionSort(int* ptr,int size){

    for(int i=1;i<size;i++){
        int curr=ptr[i],prev=i-1;

        while(prev>=0 && curr<ptr[prev]){
            ptr[prev+1]=ptr[prev];
            prev--;
        }

        ptr[prev+1]=curr;
    }

    return ptr;
}

int main(){
    int arr[]={7,1,5,3,9,4};
    int size=sizeof(arr)/sizeof(int);
    InsertionSort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}