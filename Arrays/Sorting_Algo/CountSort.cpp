#include<iostream>
#include<algorithm>

using namespace std;

int* CountSort(int* ptr, int size){
    int mini=INT_MAX, maxi=INT_MIN,count[1000]={0};
    for(int i=0;i<size;i++){
        mini=min(mini,ptr[i]);
        maxi=max(maxi,ptr[i]);
    }

    for(int j=0;j<size;j++){
        count[ptr[j]]++;
    }
    int pointer=0;
    for(int k=mini;k<=maxi;k++){
        while(count[k]--){
            ptr[pointer++]=k;
        }
    }

    return ptr;
}



int main(){
    int arr[]={1,4,1,3,2,4,3,7};
    int size=sizeof(arr)/sizeof(int);
    CountSort(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i];
}
return 0;
}