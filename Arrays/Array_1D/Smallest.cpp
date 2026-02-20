#include<iostream>
using namespace std;


int smallest(int* ptr, int size){
    int max=INT_MAX;
    for(int i=0;i<size;i++){
        if(max>ptr[i]){
            max=ptr[i];
        }
    }
    return max;
}
int main(){
    int a[]={5,4,3,9,2};
    int n=sizeof(a)/sizeof(int);
    cout<<smallest(a,n);
    return 0;
}