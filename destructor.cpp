#include<iostream>
using namespace std ;

class number {

int a ;

public :

void setdata(int z){
a = z ; 
}

void getdata(){
    cout << a  << endl ; 
}

number(){
cout << "KING IS IN THE BUILDING  (CONSTRUCTOR ) " << endl ; 

} 

~number(){
cout << "THIS IS YOUR ROCCO BABY    (DESTRUCTOR) "  << endl ; 

}

};

int main() {


number n1 ;
n1.setdata(110);
n1.getdata();


}