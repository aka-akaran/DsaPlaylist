#include <iostream>
#include <vector>
using namespace std ;

void getVectorElements( vector <int> &v, int length ){

    for ( int i = 0; i<length; i++ ){
        int element ;
        cin >> element ;
        v.push_back( element ) ;
    }

}

int pivotInArray( vector <int> v ){

    int start = 0 ;
    int end = v.size() - 1 ;
    int mid ;

    while ( start <= end ){

        mid = start + ( end - start )/2 ;
        if ( v[mid] > v[mid+1] && mid +1 < v.size()){
// here we need second condition to check if (mid+1) index
// in the range of vector
// this condition helps when we have monotonic increasing
// function
            return mid+1 ;
        }

        else if ( v[mid] >= v[start] ){
            start  = mid + 1 ;
        }
        else {
            end = mid - 1 ;
        }

    }


    return 0 ;    
}

int getPivot( vector <int> v ){

    int start = 0 ;
    int end = v.size()-1 ;

    while ( start<end ){

        int mid = start + ( end-start )/2 ;
    
        if ( v[mid] >= v[0] ){
            start = mid + 1 ;
        }
        else{
            end = mid ;
        }

    }

    if ( v[start] > v[0] ){
        return 0 ;
    }
    // if above condition is true, it means start never jumps
    // on second line, and it is only possible when we dont
    // have second line ( means no rotation )

    return start ;
}



int main(){


    cout << "Enter list length" << endl << "Then enter elements in Rotated and increasing fashion with no repeated elements" << endl ;
    vector <int> arr ;
    int l ;
    cin >> l ;

    getVectorElements( arr, l ) ;
    // int ans = pivotInArray( arr ) ;
    int ans = getPivot( arr ) ;

    cout << ans ;

    return 0 ;
}