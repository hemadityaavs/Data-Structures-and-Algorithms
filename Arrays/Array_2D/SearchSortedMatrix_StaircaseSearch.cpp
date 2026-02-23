#include<iostream>

using namespace std;

void SearchSortedMatrix(int (*arr)[4],int m, int n, int key){
    int i=m-1,j=0;

    while(i>=0&&j<=n){
        if(key==arr[i][j]){
            cout<<i<<","<<j;
            break;
        }
        else if(key>arr[i][j]){
            j++;
        }
        else if(key<arr[i][j]){
            i--;
        }
    }
}

int main(){
    int arr[][4]={
            {10,20,30,40},
            {15,25,35,45},
            {27,29,37,48},
            {32,33,39,50}
        };
    SearchSortedMatrix(arr,4,4,33);

    return 0;
}