#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[6] = {5,3,7,1,8,6} ;
    int sz = 6 ;
    int st = 0 ; 
    int target = 8 ;
    int end = sz - 1 ;  
    sort(arr , arr + sz) ;

    while(st <= end){
        int mid = st + (end - st)/2 ;

        if(arr[mid] == target){
            cout << "Target found at index = " << mid << endl ;
            break;
        }
        else if(arr[mid] > target){
            end = mid - 1 ;
        }
        else{
            st = mid + 1 ;
        }
    }
    return 0 ;
}