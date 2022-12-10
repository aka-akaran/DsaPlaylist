#include<iostream>
using namespace std ;

int main() {

    short int num ;
    cin >> num ;

    int i = 1 ;

    while (i <= num)
    {   
        int  j =1 ;

        while (j <= num){
            cout << i << " " ;
            j++ ;
        }
        
        cout << endl ;
        i++ ;
    }
    

    return 0 ;
}