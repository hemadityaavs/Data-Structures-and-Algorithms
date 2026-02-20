#include<iostream>
using namespace std;

int LinearSearch(int* ptr,int size,int target){
    for(int i=0;i<size;i++){
        if(ptr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int a[]={5,4,3,9,2};
    int n=sizeof(a)/sizeof(int);
    int target=3;
    cout<<LinearSearch(a,n,target);
    return 0;
}