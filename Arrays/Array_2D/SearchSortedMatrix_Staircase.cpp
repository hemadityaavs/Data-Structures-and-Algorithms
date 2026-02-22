#include<iostream>

using namespace std;

void SearchSortedMatrix(int (*ptr)[4],int m, int n, int key){
    int i=0,j=n-1;
    while((i<m)&&(j>=0)){
        if(ptr[i][j]==key){
            cout<<i<<","<<j;
            break;
        }else if(ptr[i][j]>key){
            j--;
        }else if(ptr[i][j]<key){
            i++;
        }
    }
}

// lets say the key is the from bottom right 
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