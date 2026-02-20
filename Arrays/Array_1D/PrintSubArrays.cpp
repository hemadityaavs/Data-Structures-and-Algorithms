#include<iostream>
using namespace std;
/*
void PrintSubArray(int *arr,int n){
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            for(k=i;k<=j;k++){
                cout<<arr[k];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}

void PrintSubArray1(int *arr,int n){
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            for(k=j;k<=i;k++){
                cout<<arr[k];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}*/

void PrintSubArray(int *arr,int size){
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int a[]={5,4,3,9,2};
    int n=sizeof(a)/sizeof(int);
    PrintSubArray(a,n);
    cout<<endl;
    //PrintSubArray1(a,n);
    return 0;
}