#include<iostream>
using namespace std ;

void reverse( char string[], int length ){

    int start = 0 ;
    int end = length-1 ;
    while ( start<end ){
        swap( string[start++], string[end--] ) ;
    }

}

int getLength( char arr[] ){

    int count = 0 ;
    for ( int i = 0; arr[i] != '\0'; i++ ){
        count++ ;
    }
    return count ;
}

int main(){

    char s[20] ;
    cout << "Enter the String " << endl;
    cin >> s ;

    int l = getLength( s ) ;
    reverse( s, l   ) ;

    cout << s ;


    return 0 ;
}