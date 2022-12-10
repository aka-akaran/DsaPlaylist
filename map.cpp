
#include <iostream>
using namespace std ;
#include <map>
int main() {
    map<int, int> mp ;

    mp[10]++ ;
    mp[9]++ ;
    mp.insert({2,3}) ;

    // cout << "map size " << mp.size() << endl ;
    // // int n = mp.size() ;
    // for( int i = 0; i<mp.size();i++ ){
    //     cout << mp[i] <<" " ;
    // }
    // cout << endl 


    map<int, int>::iterator itt ;
    itt = mp.find(9) ;
    cout <<  *(itt).first ;
    cout <<  itt->second ;



        // cout << *(itt).second<< " " ;

    for( auto it : mp ){
        // auto itt = mp.find(9) ;
        cout << it.second<< " " ;
    }
    cout << endl ;

    return 0;
}