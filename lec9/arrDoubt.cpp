#include<iostream>
using namespace std ;

int main(){

//myarray size is 4
// then how it's taking elements more than 4 
// and six elements always matching correct

    int myarray[4];

    for (int i = 0 ; i < 10 ; i++)
        cin >> myarray[i] ;

    for (int i = 0 ; i < 10 ; i++)
        cout << myarray[i] << " " ;

    return 0 ;
}