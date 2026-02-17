#include<iostream>
#include<algorithm>
using namespace std;

int BinarySearch(int* arr,int n, int target){
    sort(arr,arr+n);
    int start=0,end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]>target){
            end=mid-1;
        }else if(arr[mid]<target){
            start=mid+1;
        }
    }
    return -1;
}
int main(){
    int a[]={5,4,3,9,2};
    int n=sizeof(a)/sizeof(int);
    int target=9;
    cout<<BinarySearch(a,n,target);
    return 0;
}