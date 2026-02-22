#include<iostream>
#include<algorithm>
using namespace std;

void PrintSpiralMatrix(int (*ptr)[4],int m, int n){
    int sr=0,sc=0,er=m-1,ec=n-1,j,i;

    while(sr<=er && sc<=ec){
        for(j=sc;j<ec;j++){
            cout<<ptr[sr][j]<<" ";
        }
        for(i=sr;i<er;i++){
            cout<<ptr[i][ec]<<" ";
        }

        for(j=ec;j>sc;j--){
            if(sc==ec){
                break;
            }
            cout<<ptr[er][j]<<" ";
        }

        for(i=er;i>sr;i--){
            if(sr==er){
                break;
            }

            cout<<ptr[i][sc]<<" ";
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