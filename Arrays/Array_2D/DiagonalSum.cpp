#include<iostream>
using namespace std;

int DiagonalSum(int (*arr)[4],int n){
    int sum=0,i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((i==j)|| (j==n-1-i) && (i!=n-i-1)){
                sum+=arr[i][j];
            }
        }
    }

    return sum;
}

int main(){
    int arr[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    cout<<DiagonalSum(arr,4);

    return 0;
}