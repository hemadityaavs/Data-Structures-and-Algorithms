#include<iostream>
using namespace std;

int LinearSearch(int * arr,int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int a[]={5,4,3,9,2};
    int n=sizeof(a)/sizeof(int);
    int target=7;
    cout<<LinearSearch(a,n,target);
    return 0;
}