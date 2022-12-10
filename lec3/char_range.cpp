#include<iostream>
using namespace std ;

int main(){

    char c ;
    c = cin.get() ;


    if (c < 91 && c > 64)
        cout << "input char is Upper Case" << endl;

    else if (c < 123 && c > 96)
        cout << "input char is lower Case" << endl;

    else if (c > 47 && c < 58)
        cout << "input is numeric" << endl ;

    return 0 ;
    

}