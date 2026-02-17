#include<iostream>
using namespace std;

int Smallest(int* arr,int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }

    return min;
}
int main(){
    int a[]={5,4,3,9,2};
    int n=sizeof(a)/sizeof(int);
    cout<<Smallest(a,n);
    return 0;
}