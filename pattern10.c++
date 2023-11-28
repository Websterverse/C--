// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ;
int main() {
    // Write C++ code here
    // std::cout << "Hello world!";

int n ;
cout << "ENTER THE nth number" << endl;
cin >> n  ; 
int i  = 1;  
while(i <= n ){
    
    int j = 1 ;
    int count = i ; 
    
    while(j <= i){
        
        cout<< count; 
        count-- ; 
        
        
        j++ ; 
    }
    
    cout<< endl ;
    
    i++ ; 
}



    return 0;
}