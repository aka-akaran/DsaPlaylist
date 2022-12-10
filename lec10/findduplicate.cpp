#include <iostream>
using namespace std ;

int findDuplicate( int myarray[], int length){

    int ans = 0 ;
    for (int i = 0 ; i<length ; i++)
        ans = ans^myarray[i] ;

    for (int i = 1 ; i<length ; i++)
        ans = ans^i ;

    return ans ;
}

void getArrayElements( int a[], int length){

    cout << "Enter " << length << " elements to input in array" << endl ;
    for (int i = 0 ; i< length ; i++)
        cin >> a[i] ;

}


int main(){

    int arr[10] ;
    int len = sizeof(arr)/ sizeof(int) ;

    getArrayElements( arr, len ) ;
    cout << findDuplicate( arr, len) ;


    return 0;
}

// XOR with itself is 0 
//Suppose my input array is [2, 3, 4, 1, 3]
// 1st for loop in findDuplicate returns
// ans = 2^3^4^1^3
// 2nd for loop in findDuplicate returns
// ans = (2^3^4^1^3) ^1^2^3^4
// ans  = 3
// XOR of same numbers is 0