#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[7] = {3,6,2,7,5,8,4} ; 
    int sz = 7 ;
    int largest = INT_MIN ;
    int smallest = INT_MAX ;

    for(int i = 0 ; i < sz ; i++){
        if(arr[i] > largest){
            largest = arr[i] ;
        }
        if(arr[i] < smallest){
            smallest = arr[i] ;
        }
    }
    cout << "Largest element = " << largest << endl ;
    cout << "Smallest element = " << smallest << endl ;
}