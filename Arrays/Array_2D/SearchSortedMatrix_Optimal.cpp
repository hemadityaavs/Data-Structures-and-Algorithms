#include<iostream>
using namespace std;
void SearchSortedMatrix(int (*arr)[4],int m, int n, int key){
    for(int i=0;i<m;i++){
        int start=0,end=n-1,mid;
        while(start<=end){
            mid=(start+end)/2;
            
            if(key==arr[i][mid]){
                cout<<i<<","<<mid;
                break;
            }
            else if(key>arr[i][mid]){
                start=mid+1;
            }
            else if(key<arr[i][mid]){
                end=mid-1;
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