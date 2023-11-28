#include<iostream>
using namespace std ;

int main() {

int n ;
cout << "ENTER THE NUMBER" << endl ; 
cin >> n ;


int i ; 
char ch = 'A';


for(i = 1 ; i<= n ; i++){

for(int j = 1 ; j<= i ; j++ ){

cout << ch ;
ch++ ; 
}

cout << endl ;
}


}