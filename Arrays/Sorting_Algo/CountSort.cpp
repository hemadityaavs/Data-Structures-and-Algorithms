#include<iostream>
#include<algorithm>

using namespace std;

//This CountSort version is only for positive arrays
int* CountSort(int*arr,int size){

    int count_arr[1000]={0};

    int mini=INT_MAX, maxi=INT_MIN;

    for(int i=0;i<size;i++){

        mini=min(mini,arr[i]);
        maxi=max(maxi,arr[i]);
    }



    for(int j=0;j<size;j++){
        count_arr[arr[j]]++;
    }
    int pointer=0;
    for(int k=mini;k<=maxi;k++){
        while(count_arr[k]--){
            arr[pointer++]=k;
        }
    }

    return arr;

}
int main(){
    int arr[]={1,4,1,3,2,4,3,7};
    int size=sizeof(arr)/sizeof(int);
    CountSort(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i];
    }

}