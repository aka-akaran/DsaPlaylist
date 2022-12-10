#include <iostream>
using namespace std ;


// Tail Recursion --> Recursive call after Processing
void printNum1( int n ){
    
    if ( n==0 ){
        return ;
    }
    cout << n << " " ;
    printNum1( n-1 ) ;

}


// Head Recursion --> Recursive call before Processing
void printNum2( int n ){
    
    if ( n==0 ){
        return ;
    }
    printNum2( n-1 ) ;
    cout << n << " " ;

}

int main(){

    int num ;
    cin >> num ;
    printNum1(num) ;
    cout << endl;
    printNum2(num) ;


    return 0 ;

}