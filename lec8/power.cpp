#include <iostream>
using namespace std ;

int pow(int x, int y){

    int answer = 1 ;

    for (int i = 1 ; i<=y ; i++){
        
        answer *= x ;
    }

    return answer ;
}

int main(){

    int x, y ;
    cin >> x >> y ;

    cout << x <<" raise to power " << y << " is " << pow(x, y) ;


    return 0 ;
}