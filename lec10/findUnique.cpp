#include <iostream>
using namespace std ;

void getArrayElements( int array[], int length){

    cout << "Enter " << length << " elements to input in array with " << length/2 << " repeating elements"<< endl ;
    for (int i = 0 ; i< length ; i++)
        cin >> array[i] ;

}

int findUnique( int array[], int length){

    int ans = 0 ;
    for (int i = 0 ; i< length ; i++)
        ans = ans ^ array[i] ;
    
    return ans ;
}

int main (){

    int n = 3 ;
    int size = (2 * n) + 1 ;
    int a[size] ;

    getArrayElements(a, size) ;
    cout << findUnique(a, size) ;

    return 0 ;
}