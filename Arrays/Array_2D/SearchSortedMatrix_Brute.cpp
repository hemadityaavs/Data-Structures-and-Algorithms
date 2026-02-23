#include<iostream>
using namespace std;
void SearchSortedMatrix(int (*arr)[4],int m, int n, int key){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]==key){
                cout<<i<<","<<j;
            }
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