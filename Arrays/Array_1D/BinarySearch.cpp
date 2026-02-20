#include<iostream>
#include<algorithm>
using namespace std;

int BinarySearch(int* ptr, int size, int target){
    sort(ptr,ptr+size);
    int start=0, end=size-1;
    while(start<=end){
    int mid=(start+end)/2;
    if(ptr[mid]==target){
        return mid;
    }
    else if(ptr[mid]>target){
        end=mid-1;
    }
    else if(ptr[mid]<target){
        start=mid+1;
    }

}
return -1;

}
int main(){
    int a[]={5,4,3,9,2};//2,3,4,5,9
    int n=sizeof(a)/sizeof(int);
    int target=7;
    cout<<BinarySearch(a,n,target);
    return 0;
}