// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ;
int main() {
   
int n ;
cout << "ENTER THE nth number" << endl;
cin >> n  ; 
int i  = 1;  
    char count = 'A' ; 
while(i <= n ){
    
    int j = 1 ;
    
    while(j <= i){
        
        cout<< count; 

        j++ ; 
        count++ ;
    }
    
    cout<< endl ;
    
    i++ ; 
}



    return 0;
}