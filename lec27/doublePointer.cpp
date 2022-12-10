#include <iostream>
using namespace std ;



void update ( int **ptr ) {

    **ptr = **ptr + 1 ;
    *ptr = *ptr + 1 ;
    ptr = ptr + 1 ;

}


int main(){


    int i = 5 ;
    int *p1 = &i ;
    int **p2 = &p1 ;

    // NOTE : We can't do       int *p2 = &p1
    // We can't assign address of pointer to int pointer

    cout << i << endl ;
    cout << *p1 << endl ;
    cout << **p2 << endl ;


    cout << &i << endl ;
    cout << p1 << endl ;
    cout << *p2 << endl ;

    cout << &p1 << endl ;
    cout << p2 << endl ;



















    cout << endl << endl ;
    cout << "before " << i << endl ;
    cout << "before " << p1 << endl ;
    cout << "before " << p2 << endl ;

    update( p2 ) ;

    cout << "after " << i << endl ;
    cout << "after " << p1 << endl ;
    cout << "after " << p2 << endl ; 
























    return 0 ;
}