#include<iostream>
using namespace std;

int DiagonalSum(int(*ptr)[4],int n){
    int i,j,sum=0;
    
    for(i=0;i<n;i++){
        for (j=0;j<n;j++){
            if(((i==j)||(j==(n-i-1)))&& (i!=(n-i-1))){
                sum+=ptr[i][j];
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