#include <iostream>
using namespace std ;

int getLength( char arr[] ){

    int count = 0 ;
    for ( int i = 0; arr[i] != '\0'; i++ ){
        count ++ ;
    }
    return count ;
}

int main(){

    // // char array decleration
    // char name[20] ;
    // cout << "Enter your name" << endl ;
    // cin >> name ;
    
    // // Print char array
    // cout << name << endl ;

    // cout << getLength( name ) ;
    // cout << endl ;
    // name[2] = '\0' ;
    // // char will only read till null character '\0' ;
    // cout << getLength( name ) ;

    // string vs char array
    char ch[20] = {'a', 'b', '\0', 'c', 'd', '\0'} ;
    string s = "ab\0cd\0" ;
    cout << ch << endl ;
    cout << s ;

    return 0 ;
}