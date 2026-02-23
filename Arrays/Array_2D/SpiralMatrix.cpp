#include<iostream>

using namespace std;

void SpiralMatrix(int (*arr)[5],int m, int n){
    int sr=0,er=m-1,sc=0,ec=n-1;

    while((sr<=er)&&(sc<=ec)){

    for(int j=sc;j<ec;j++){
        cout<<arr[sr][j]<<" ";
    }

    for(int i=sr;i<er;i++){
        cout<<arr[i][ec]<<" ";
    }

    for(int j=ec;j>sc;j--){
        if(sr==er){
            break;
        }
        cout<<arr[er][j]<<" ";
    }

    for(int i=er;i>sc;i--){
        if(sc==ec){
            break;}
        cout<<arr[i][sc]<<" ";
    }
        sr++;er--;sc++;ec--;
}
}
int main(){
    int arr[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};

    SpiralMatrix(arr,5,5);

    return 0;
}