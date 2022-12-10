#include<iostream>
using namespace std ;

void pattern3( short int n){

    int row = 1 ;

    while (row <= n){   
        int  col = 1 ;
        while (col <= n){
            cout << col << " " ;
            col++ ;
        }
        
        cout << endl ;
        row++ ;
    }
    cout << endl ;      

}

void pattern4a(short int n){

    int row = 1 ;

    while (row <= n){   
        int  col = 1 ;
        while (col <= n){
            cout << n-col+1 << " " ;
            col++ ;
        }
        
        cout << endl ;
        row++ ;
    }
    cout << endl ;      
}

void pattern4b( short int n){

    int row = 1 ;

    while (row <= n){   
        int  col = n ;
        while (col > 0){
            cout << col << " " ;
            col-- ;
        }
        
        cout << endl ;
        row++ ;
    }
    
    cout << endl ;  
}

void pattern5(short int n){

    int row = 1, element = 1;

    while (row <= n){

        int col = 1 ;
        while(col <= n){
            cout << element << " " ;
            element++ ;
            col++ ;

        }
        cout << endl ;
        row++ ;
    }
    cout << endl ;  
}

void pattern6(short int n){

    int row = 1;

    while (row <= n){

        int col = 1 ;
        while(col <= row){
            cout << "* " ;
            col++ ;

        }
        cout << endl ;
        row++ ;
    }
    cout << endl ;  
}

void pattern7(short int n){

    int row = 1;

    while (row <= n){

        int col = 1 ;
        while(col <= row){
            cout << row << " " ;
            col++ ;

        }
        cout << endl ;
        row++ ;
    }
    cout << endl ;  
}

void pattern8(short int n){

    int row = 1, element = 1;

    while (row <= n){

        int col = 1 ;
        while(col <= row){
            cout << element << " " ;
            element++ ;
            col++ ;

        }
        cout << endl ;
        row++ ;
    }
    cout << endl ;  
}

void pattern9a(short int n){

    int row = 1 ;

    while (row <= n){

        int col = 1 ;
        int element = row ;

        while(col <= row){
            cout << element << " " ;
            col++ ;
            element++ ;

        }
        cout << endl ;
        row++ ;
    }
    cout << endl ;  
}

void pattern9b(short int n){

    int row = 1 ;

    while (row <= n){

        int col = 0 ;
        int element = row ;

        while(col < row){
            cout << row+col << " " ;
            col++ ;
            element++ ;

        }
        cout << endl ;
        row++ ;
    }
    cout << endl ;  
}

void pattern10a(short int n){

    int row = 1 ;

    while (row <= n){

        int col = row ;

        while(col > 0){
            cout << col << " " ;
            col-- ;
        }

        cout << endl ;
        row++ ;
    }
    cout << endl ;  
}

void pattern10b(short int n){

    int row = 1 ;

    while (row <= n){

        int col = 1 ;

        while(col <= row){
            cout << row - col + 1 << " " ;
            col++ ;
        }

        cout << endl ;
        row++ ;
    }
    cout << endl ;  
}

void pattern11(short int n){

    short int row = 1 ;
    while (row <= n){

        short int col = 1 ;
        while (col <= n){
            char ch = 'A' + row - 1 ;
            cout << ch << " ";
            col++ ;
        }
        cout << endl;
        row++ ;

    }
    cout << endl ;  
}

void pattern12(short int n){

    short int row = 1 ;
    while (row <= n){

        short int col = 1 ;
        while (col <= n){
            char ch = 'A' + col - 1 ;
            cout << ch << " ";
            col++ ;
        }
        cout << endl;
        row++ ;

    }
    cout << endl ;  
}

void pattern13(short int n){

    int row = 1 ;
    char element = 'A';

    while (row <= n){

        int col = 1 ;
        while(col <= n){
            cout << element << " " ;
            element++ ;
            col++ ;

        }
        cout << endl ;
        row++ ;
    }
    cout << endl ;  
}

void pattern14(short int n){

    int row = 1 ;
    

    while (row <= n){
        
        int col = 1 ;
        while(col <= n){
            char element = 'A' + (row+col-1) - 1 ;
            cout << element << " " ;
            col++ ;

        }
        cout << endl ;
        row++ ;
    }
    cout << endl ;  
}

void pattern15(short int n){

    short int row = 1 ;
    while (row <= n){

        short int col = 1 ;
        while (col <= row){
            char ch = 'A' + row - 1 ;
            cout << ch << " ";
            col++ ;
        }
        cout << endl;
        row++ ;

    }
    cout << endl ;  
}

void pattern17(short int n){

    short int row = 1 ;
    while (row <= n){

        short int spaces = n - row ;
        while (spaces){
            cout << "  " ;
            spaces-- ;
        }

        short int col = 1 ;
        while (col <= row){
            cout << "* " ;
            col++ ;
        }
        cout << endl ;
        row++ ;

    }
    cout << endl ;  
}

void pattern18(short int n){

    short int row = 1 ;
    while (row <= n){

        short int spaces = row - 1 ;
        while (spaces){
            cout << "  " ;
            spaces-- ;
        }

        short int col = 1 ;
        while (col <= n - row + 1 ){
            cout << "* " ;
            col++ ;
        }
        cout << endl ;
        row++ ;

    }
    cout << endl ;  
}

void pattern19a(short int n){

    short int row = 1 ;

    while (row <= n){

        short int spaces = n - row ;
        while (spaces){
            cout << "  " ;
            spaces-- ;
        }

        short int col = 1 ;
        while (col <= row ){
            cout << col << " " ;
            col++ ;
        }

        col = 1 ;
        while (col < row ){
            cout << row - col << " " ;
            col++ ;
        }


        cout << endl ;
        row++ ;

    }
    cout << endl ;    

}

void pattern19b(short int n){

    short int row = 1 ;
    
    while (row <= n){

        short int spaces = n - row ;
        while (spaces){
            cout << "  " ;
            spaces-- ;
        }

        short int col = 1 ;
        while (col <= row ){
            cout << col << " " ;
            col++ ;
        }

        short int start = row - 1 ;
        while (start ){
            cout << start << " " ;
            start-- ;
        }


        cout << endl ;
        row++ ;

    }
    cout << endl ;    

}

void pattern20(short int n){

    short int row = 1 ;
    
    while (row <= n){

        short int col = 1 ;
        while (col <= n - row + 1){
            cout << col << " " ;
            col++ ;
        }

        short int stars = 2*(row - 1) ;
        while (stars){
            cout << "* " ;
            stars-- ;
        }


        short int start = n - row + 1 ;
        while (start ){
            cout << start << " " ;
            start-- ;
        }


        cout << endl ;
        row++ ;

    }
    cout << endl ;    

}

int main(){

    short int num ;
    cin >> num ;

    pattern3(num) ;
    pattern4a(num) ;
    pattern4b(num) ;
    pattern5(num) ;
    pattern6(num) ;
    pattern7(num) ;
    pattern8(num) ;
    pattern9a(num) ;
    pattern9b(num) ;
    pattern10a(num) ;
    pattern10b(num) ;
    pattern11(num) ;
    pattern12(num) ;
    pattern13(num) ;
    pattern14(num) ;
    pattern15(num) ;
    pattern17(num) ;
    pattern18(num) ;
    pattern19a(num) ;
    pattern19b(num) ;
    pattern20(num) ;



    return 0 ;
}