#include<iostream>
#include<algorithm>
using namespace std;

int* SelectionSort(int* ptr, int size){
    int min_index;
    for(int i=0;i<size-1;i++){
        int min= INT_MAX;
        for(int j=i;j<size;j++){
            if(min>ptr[j]){
                min=ptr[j];
               min_index=j;
            }

            swap(ptr[i],ptr[min_index]);
        }
    }
    return ptr;
}
int main(){
    int arr[]={7,1,5,3,6,4};
    int size=sizeof(arr)/sizeof(int);

    SelectionSort(arr,size);

    for(int k=0;k<size;k++){
        cout<<arr[k]<<" ";
    }
}