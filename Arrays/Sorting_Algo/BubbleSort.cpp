#include<iostream>
#include<algorithm>

using namespace std;

int* BubbleSort(int* arr, int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    return arr;
}

int main(){
    int arr[]={7,1,5,3,6,4};
    int size=sizeof(arr)/sizeof(int);
    BubbleSort(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}