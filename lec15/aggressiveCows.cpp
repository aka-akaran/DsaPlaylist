#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

int getMax ( vector <int> v ){

    int maxi = -1 ;
    for ( int i=0; i<v.size(); i++ ){
        maxi = max( v[i], maxi ) ;
    }
    return maxi ;
}

void getVectorElements ( vector <int> &v, int length ){

    for ( int i = 0; i<length; i++ ){
        int element ;
        cin >> element ;
        v.push_back( element ) ;
    }

}

bool isPossible( vector <int> v, int cows, int currentMax ) {

    sort( v.begin(), v.end() ) ;
    int cowCount = 1 ;
    int lastPos = v[0] ;

    for ( int i = 0; i<v.size(); i++ ){

        if( v[i]-lastPos >= currentMax ){
            cowCount++ ;
            if ( cowCount == cows ){
                return true ;
            }
            lastPos = v[i] ;
        }

    }
    return false ;

}

int main () {

    int n, c ;
    vector <int> stalls ;

    cin >> n >> c ;
    getVectorElements( stalls, n ) ;
    int maxi = getMax( stalls ) ;

    int start = 0 ;
    int end = maxi ;
    int ans = -1 ;

    while ( start <= end ){

        int mid = start + ( end-start )/2 ;

        if( isPossible( stalls, c, mid ) ){
            ans = mid ;
            start = mid+1 ;
        }
        else{
            end = mid-1 ;
        }

    }
    cout << ans ;

    return 0 ;
}