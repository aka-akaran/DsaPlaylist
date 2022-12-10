#include <iostream>
#include <vector>
using namespace std ;

void getVectorElements ( vector <int> &v, int length ){

    for ( int i = 0; i<length; i++ ){
        int element ;
        cin >> element ;
        v.push_back( element ) ;
    }

}

int getVectorSum ( vector <int> v ){

    int sum = 0 ;
    for ( int i = 0; i<v.size(); i++ ){
        sum += v[i] ;
    }
    return sum ;

}

bool isPossible( vector <int> v, int n, int m, int maxlimit ) {

    int currentPageSum = 0 ;
    int studentNo = 1 ;

    for ( int i = 0; i<n; i++ ){

        if( currentPageSum + v[i] <= maxlimit ){
            currentPageSum += v[i] ;
        }
        else {
            studentNo++ ;
            if ( studentNo > m || v[i] > maxlimit ){
                return false ;
            }
            currentPageSum = v[i] ;
        }

    }
    return true ;


}

int main (){

    int n, m ;
    vector <int> pages ;

    cin >> n >> m ;
    getVectorElements( pages, n) ;

    int start = 0 ;
    int sum = getVectorSum( pages ) ;
    int end = sum ;
    int ans = -1 ;

    while ( start <= end ){

        int mid  = start + ( end-start )/2 ;

        if ( isPossible( pages, n, m, mid ) ) {
            ans = mid ;
            end = mid-1 ;
        }
        else {
            start = mid + 1 ;
        }

    }
    cout << ans ;



    return 0 ;
}

// DOUBT : for the test case
// 4 4
// 5 17 100 11
// by our code we are not allocating book to 4th student