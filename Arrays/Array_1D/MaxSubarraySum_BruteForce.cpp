#include<iostream>
#include<algorithm>

using namespace std;

int MaxSubArraySum(int* ptr, int size){
    int max_sum=INT_MIN;
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=ptr[k];
            }
            max_sum=max(sum,max_sum);
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