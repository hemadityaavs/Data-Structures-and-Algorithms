#include<iostream>
using namespace std;
int Largest(int *arr, int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
    if(max<arr[i]){
        max=arr[i];
    }
    }
    return max;
}
int main(){
    int a[]={5,4,3,9,2};
    int n=sizeof(a)/sizeof(int);
    cout<<Largest(a,n);
    return 0;

}