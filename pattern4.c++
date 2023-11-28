// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ;
int main() {

int n ;
cout << "ENTER THE NUMBER" << endl ; 
cin >> n ;

int i , j ; 
i = 1 ; 
while(i <= n ){
    
    j = n  ;
    
    while(j >= 1 ){
        
        cout << j ;
        j-- ; 
    }
    cout << endl ; 
    i++ ;
}

    return 0;
}