#include<iostream>

using namespace std;

int SearchSortedMatrix(int (*ptr)[4],int m, int n,int key){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(ptr[i][j]==key){
                cout<<i<<","<<j;
                break;
            }
        }
    }
    return -1;
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