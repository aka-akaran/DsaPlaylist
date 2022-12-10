#include<iostream>
using namespace std ;

int main(){


/*
    int a, b = 1 ;
    a = 10 ;
    if (++a)
        cout << b ;

    else
        cout << ++b ;




    int a = 1 , b = 2 ;

    if (a-- > 0 && ++b >2 )
        cout << "Stage inside if " ;
    else
        cout << "Stage  inside else" ;
    
    cout << a << " " << b << endl ;


    int a = 1 , b = 2 ;

    if (a-- > 0 || ++b >2 )
        cout << "Stage inside if " ;
    else
        cout << "Stage  inside else" ;
    
    cout << a << " " << b << endl ;


    int number = 3 ;
    cout << (25* ( ++number )) ;
*/

    int a = 1 ;
    int b = a++ ;
    int c = ++a ;
    cout << b << endl ;
    cout << c ;




    return 0 ;
}