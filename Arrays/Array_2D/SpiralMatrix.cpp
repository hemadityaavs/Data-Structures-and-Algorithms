#include<iostream>
#include<algorithm>
using namespace std;

void PrintSpiralMatrix(int (*ptr)[4],int m, int n){
    int sr=0,sc=0,er=m-1,ec=n-1,j,i;

    while(sr<=er && sc<=ec){
        for(j=sc;j<=ec;j++){
            cout<<ptr[sr][j]<<" ";
        }
        for(i=sr+1;i<=er;i++){
            cout<<ptr[i][ec]<<" ";
        }

        if(sc<ec){
        for(j=ec-1;j>=sc;j--){
    
            cout<<ptr[er][j]<<" ";
        }}

        if(sr<er){
        for(i=er-1;i>=sr;i--){

            cout<<ptr[i][sc]<<" ";
        }
    }
        sc++; ec--;sr++;er--;
    }
}

int main(){
    int arr[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
    };
    PrintSpiralMatrix(arr,3,4);

    return 0;
}