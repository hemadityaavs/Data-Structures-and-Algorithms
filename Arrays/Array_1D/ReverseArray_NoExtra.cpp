#include<iostream>
using namespace std;
int* Reverse(int *arr,int n){
    int start=0, end=n-1;

    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    return arr;

}
int main(){
    int a[]={5,4,3,9,2};
    int n=sizeof(a)/sizeof(int);
    Reverse(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }

    return 0;
}