#include<iostream>
using namespace std;

int largest(int* ptr,int size){
    int min= INT_MIN;
    for(int i=0;i<size;i++){
        if(ptr[i]>min){
            min=ptr[i];
        }
}
    return min;
}
int main(){
     int a[]={5,4,3,9,2};
     int n=sizeof(a)/sizeof(int);
    cout<<largest(a,n);

return 0;
}