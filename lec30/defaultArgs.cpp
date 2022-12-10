#include <iostream>
using namespace std ;

int getSum( int a[], int n, int start = 0, int padding = 0 ){

    int sum = padding ;
    for ( int i = start; i<n; i++ ){
        sum += a[i] ;
    }
    return sum ;
}

int main(){

    int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10} ;

    cout << getSum( a, 10, 5, 10 ) << endl ;    
    // 6+7+8+9+10 = 40 + padding = 50
    
    cout << getSum( a, 10 ) << endl ; 
    // Default padding = 0, Default start = 0   
    // 1+2+3+4+5+6+7+8+9+10 = 55


    return 0 ;
}


// NOTE : Default arguments starts from rightmost argument only
// NOTE : Default argumet can't be in the middle of non default arguments