#include <iostream>
using namespace std ;

void updatearr( int array[], int length){
    array[0] = INT_MAX ;
    
    cout << "\n" ;
    cout << "Calling in Updatearr Function" << endl ;
    for(int i = 0; i<length ; i++)
        cout << array[i] << " " ;
    cout << endl ;

    length += 10 ;
    cout << "\n" ;

    cout << "changed length in updatearr function" << endl ;
    cout << "New length is " << length << endl ;
}

int main (){



    int mainarr[3] = {12, 56, 74} ;
    int l = 3 ;




    updatearr(mainarr, l) ;

    cout << "\n" ;
    cout << "\n" ;
    cout << "\n" ;
    cout << "\n" ;


    cout << "Calling in main" << endl ;
    for(int i = 0; i<l ; i++)
        cout << mainarr[i] << " " ;
    cout << endl ;
    


    cout << "\n" ;


    cout << "length in main is " << l << endl ;
    cout << "length changed in updatearr function is not reflected in main function " ;
    
    cout << "\n" ;
    cout << "\n" ;



    return 0 ;
}

// Here length updated in updatearr function is not 
//reflected in main function
// but changes in array in updatearr function modify array
// in main function 
// because  ---> array is called by address/ reference
// and length is passed by value