#include<iostream>
#include<algorithm>
using namespace std;

/*int MaxSubArraySum(int* ptr, int n){
    int max_sum=INT_MIN,i,j,sum;
    for(i=0;i<n;i++){
        sum=0;
        for(j=i;j<n;j++){
            sum+=ptr[j];

            if(max_sum<sum){
                max_sum=sum;
            }
        }
    }

    return max_sum;

}*/
int MaxSubArraySum(int* ptr, int size){
    int max_sum=INT_MIN;

    for(int i=0;i<size;i++){
        int sum=0;
        for(int j=i;j<size;j++){
            sum+=ptr[j]; 
            }
            max_sum=max(max_sum,sum);
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