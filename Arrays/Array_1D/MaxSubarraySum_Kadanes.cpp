#include<iostream>
using namespace std;

int MaxSubArraySum(int* ptr, int n){
    int max_sum=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=ptr[i];
        max_sum=max(max_sum,sum);
        if(sum<0){
            sum=0;
       }
    }
    return max_sum;
}
int main(){
    int a[]={2,-3,6,-5,4,2};
    int n=sizeof(a)/sizeof(int);
    int max=MaxSubArraySum(a,n);
    cout<<max;
    return 0;
    
}