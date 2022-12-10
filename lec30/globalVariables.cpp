#include <iostream>
using namespace std ;

// Global Variable
int score = 0 ;

void a( int &i ){
    score++ ;
    i++ ;
    cout << score << endl ;
    cout << i << endl ;
    cout << "Global Variable changed inside the function" << endl  ;
}

void b( int &i){
    cout << score << endl ;
    cout << i << endl ;
}

int main (){

    int i = 10 ;
    cout << "i in main function " << i << endl ;
    a(i) ;
    b(i) ;


    return 0 ;
}


// NOTE : Global variable can be changed by any function
// Bad Practice 