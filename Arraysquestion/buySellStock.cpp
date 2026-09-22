#include <iostream>
using namespace std;
int main(){
int arr[7] = {7,1,5,3,9,0,8};
int n = 7;
int bestBuy = arr[0] ;
int maxProfit = 0;
for(int i = 1 ; i < n ; i++){
    if(bestBuy <=  arr[i]){
        maxProfit = max(arr[i] - bestBuy , maxProfit) ;
    }
    bestBuy = min(arr[i] , bestBuy);
}
    cout << "Maximum Profit = " << maxProfit <<endl;
    return 0;
}