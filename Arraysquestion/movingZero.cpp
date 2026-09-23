#include <iostream> 
using namespace std ;
int main(){
    int arr[7] = {4,0,5,0,0,7,8} ; 
    int sz = 7 ;
    int target = 0 ;
    
    for(int i = 0 ; i < sz ; i++){
        if(arr[i] != 0){
            swap(arr[i] , arr[target]) ;
            target++ ;
        }
    }
    for(int j = 0 ; j < sz ; j++){
        cout << arr[j] << " " ;
    }
    cout << endl ;

    return 0 ;
}