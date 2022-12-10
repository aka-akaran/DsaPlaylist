#include <iostream>
using namespace std ;

void reachHome( int source, int desti ){

    cout << "Source " << source << " Destination " << desti << endl ;

    // base case
    if( source == desti ){
        return ;
    }
    // processing - ek step aage badh jaao
    source++ ;

    // recursive call
    reachHome( source, desti ) ;
}

int main(){

    int source, desti ;
    cin >> source >> desti ;
    reachHome( source, desti ) ;

    return 0 ;
}