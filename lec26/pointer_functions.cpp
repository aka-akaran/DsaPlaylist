#include <iostream>
using namespace std ;








void print( int *p ) {

    cout << p << endl ;
    cout << *p << endl ;

}






void update( int *p ){

    *p = *p + 1 ;
    cout << "Inside " << *p << endl ;
    p = p + 1 ;
    cout << "Inside " << p << endl ;


}








int getSum_a( int arr[], int n ) {

    cout << sizeof( arr ) << endl ;

    int sum = 0 ;
    for ( int i = 0; i<n; i++ ){
        sum += arr[i] ;
    }

    cout << "Sum is " ;
    return sum ;
}








int getSum_b( int *arr, int n ) {

    cout << sizeof( arr ) << endl ;

    int sum = 0 ;
    for ( int i = 0; i<n; i++ ){
        sum += arr[i] ;
    }

    cout << "Sum is " ;
    return sum ;
}








int main(){






    int value = 5 ;
    int *p = &value ;

    print( p ) ;



    cout << "Before " << *p << endl ;
    cout << "Before " << p << endl ;

    update(p) ;
    cout << "After " << *p << endl ;
    cout << "After " << p << endl ;



    // NOTE : Address changes in the local scope of function
    // NOTE : value changes by derefrencing


























    int arr[5] = { 1,2,3,4,5 } ;

    cout << getSum_a( arr, 5) << endl ;


    // sizeof inside function will return size of pointer
    // Because in function, address of array is passed
    // By the compiler


    cout << getSum_b(  arr+3 , 2) << endl ;
    // We can make benefit of above concept as this
























    return 0 ;
}