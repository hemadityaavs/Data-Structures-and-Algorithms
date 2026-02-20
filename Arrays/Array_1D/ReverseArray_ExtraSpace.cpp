#include<iostream>
using namespace std;

int* Reverse(int * arr,int n){
    int reversed[5];

    for(int i=n-1;i>=0;i--){
        reversed[n-1-i]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=reversed[i];
    }

    return arr;
}

int main(){
    int a[]={5,4,3,9,2};
    int n=sizeof(a)/sizeof(int);
    int* a_reversed=Reverse(a,n);

    for(int i=0;i<n;i++){
        cout<<a_reversed[i];
    }
    return 0;
}