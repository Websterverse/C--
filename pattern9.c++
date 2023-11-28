// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ;
int main() {

int n ;
cout << "ENTER THE NUMBER" << endl ; 
cin >> n ;

int count = 1 ;

int i , j ; 
i = 1 ; 

while(i <= n ){
int value = i ; 
    
    j = 1 ;
    
    while(j <= i ){
        
        cout << value << " " ;
        value++ ; 
        j++ ; 
    }
    cout << endl ; 
    i++ ;
}

    return 0;
}