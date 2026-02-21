#include<iostream>
#include<algorithm>

using namespace std;

int* InsertionSort(int* ptr,int size){
    for(int i=1;i<size;i++){
        int current=ptr[i],prev=i-1;
        while(prev>=0 && current<=ptr[prev]){
            ptr[prev+1]=ptr[prev];
            prev--;
        }
        ptr[prev+1]=current;
    }
    return ptr;
}
int main(){
    int arr[]={7,1,5,3,6,4};
    int size=sizeof(arr)/sizeof(int);

    InsertionSort(arr,size);

    for(int k=0;k<size;k++){
        cout<<arr[k]<<" ";
    }
}