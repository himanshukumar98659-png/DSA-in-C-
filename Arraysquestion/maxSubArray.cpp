#include <iostream>
using namespace std ;
int main(){
    int arr[9] = {-2, 1, -3, 4, -1, 2, 1, -5, 4} ;
    int sz = 9 ;
    int maxSum = arr[0] ;
    int sum = 0 ;
    for(int i = 0 ; i < sz ; i++){
        sum += arr[i] ;
        maxSum = max(sum , maxSum) ;

        if(sum < 0){
            sum = 0 ;
        }
    }
    cout << "Maximum Sum = " << maxSum << endl ;
    return 0 ;
}
