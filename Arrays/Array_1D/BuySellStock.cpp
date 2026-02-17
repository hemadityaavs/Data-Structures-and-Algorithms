#include<iostream>
using namespace std;

int MaxProfit(int *ptr, int n){
    int min_buy=ptr[0],profit=0,max_profit=INT_MIN,i;

    for(i=0;i<n;i++){
        min_buy=min(min_buy,ptr[i-1]);
        profit=ptr[i]-min_buy;
        max_profit=max(max_profit,profit);
    }
    return max_profit;
}
int main(){
    int sell_price[]= {7,1,5,3,6,4};
    int n=sizeof(sell_price)/sizeof(int);
    cout<<MaxProfit(sell_price,n);
    
}