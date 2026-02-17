#include<iostream>
using namespace std;

int MaxSubArraySum(int* ptr, int n){
    int max_sum=INT_MIN,i,j,k,sum;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            sum=0;
            for(k=i;k<=j;k++){
                sum+=ptr[k];

            if(max_sum<sum){
                max_sum=sum;
            }

            }
            
        }
    }

    return max_sum;

}
int MaxSubArraySum1(int* ptr, int n){
    int max_sum=INT_MIN,i,j,k,sum;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            sum=0;
            for(k=j;k<=i;k++){
                sum+=ptr[k];

            if(max_sum<sum){
                max_sum=sum;
            }

            }
            
        }
    }

    return max_sum;

}
int main(){
    int a[]={2,-3,6,-5,4,2};
    int n=sizeof(a)/sizeof(int);
    int max=MaxSubArraySum1(a,n);
    cout<<max;
    return 0;
}