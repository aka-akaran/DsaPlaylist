#include<iostream>
using namespace std ;

int main(){

    int n = 10 ;

    int lastSecond = 0 ;
    int last = 1 ;


    for (int i = 1 ; i <=n ; i++){

        int nextnum = lastSecond + last ;
        cout << nextnum << " " ;
        lastSecond = last ;
        last = nextnum ;

    }


    return 0 ;
}