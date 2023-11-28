#include<iostream>
using namespace std ;

void tolow(char name[] , int n){

for(int i = 0 ; name[i] != '\0'; i++){

if(name[i] >= 'a' && name[i] <= 'z'){
    name[i];
}


else {
   name[i] = name[i] - 'A' + 'a' ; 
}
}

cout << name <<endl; 

}



int check(char name[], int n){

int s = 0 ; 
int e = n -1 ;

while(s<=e){

if(name[s] == name[e]){

    s++;
    e-- ;
}

if(name[s] != name[e]){
    return 0 ; 
}


}

return 1 ;

}



int main() {

char name[20] ;


cout << "ENTER THE NAME " << endl  ;
cin >> name ;

cout << "YOUR NAME IS " << name << endl;

int count = 0 ; 
for(int i = 0 ; name[i] != '\0'; i++){

count++ ;


}

cout  << "NUMBER OF CHARACTER IS " << count ; 
// int s = 0 ; 
// int e =  count - 1  ;

// char temp ;
// while(s<e){

// temp  = name[s];
// name[s] = name[e];
// name[e] = temp ;

// s++;
// e-- ; 
// }

// cout << name << endl ; 

// cout << "YOUR NAME IS " << name << endl;

cout << "SOME TIMES BEING LATE IS BEING RIGHT ON TIME " << endl ;


cout << check(name , count)  << endl ;

tolow(name , count);

char q =  tolower('C');
cout << q;

}