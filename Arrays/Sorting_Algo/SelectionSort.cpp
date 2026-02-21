#include<iostream>
#include<algorithm>
using namespace std;

int* SelectionSort(int* ptr, int size){
    for(int i=0;i<size-1;i++){
        int mini=INT_MAX,min_index;
        for(int j=i;j<size;j++){

            if(mini>ptr[j]){
                mini=ptr[j];
                min_index=j;
            }
        }

        swap(ptr[i],ptr[min_index]);

    }

    return ptr;

}

int main(){

    int arr[]={7,1,5,3,6,4};
    int size=sizeof(arr)/sizeof(int);
    SelectionSort(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }

    return 0;
}