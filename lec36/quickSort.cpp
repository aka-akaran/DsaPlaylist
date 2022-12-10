#include <iostream>
using namespace std ;

int partition( int arr[], int s, int e ){

    int pivot = arr[s] ;

    int cnt = 0 ;
    for ( int i = s+1; i<=e; i++ ){
        if ( arr[i] <= pivot ){
            cnt++ ;
        }
    }

    // place pivot at right pos
    int pivotIndx = s+cnt ;
    swap( arr[s], arr[pivotIndx] ) ;
    int i = s ;
    int j = e ;

    // left and right walla part sambhal lete hain
    while ( i< pivotIndx && j > pivotIndx ){

        while( arr[i]< pivot ){
            i++ ;
        }

        while( arr[j] > pivot ){
            j-- ;
        }

        if ( i < pivotIndx && j > pivotIndx){
            swap ( arr[i++], arr[j--] ) ;
        }

    }
    return pivotIndx ;

}

void quickSort( int arr[], int s, int e ){

    // base Case
    if ( s >= e ){
        return ;
    }

    // 
    int p = partition( arr, s, e ) ;

    // recursive call

    // left part sort karo
    quickSort( arr, s, p-1 ) ;

    // right part sort karo
    quickSort( arr, p+1, e ) ;


}


int main(){

    int a[10] = {56,7,980,34,54,56,34,67,56,5} ;
    int n = 10 ;


    int start = 0 ;
    int end = n-1 ;
    quickSort( a, start, end ) ;

    for ( int i = 0; i<n; i++ ){
        cout << a[i] << " " ;
    }



    return 0 ;
}