#include<iostream>
using namespace std;

class complex{

int real ;
int image ;

 public :

void setdata (int v1 , int v2){
real = v1 ;
image = v2 ;

}

void sum(complex o1 , complex o2){
real = o1.real + o2.real ;
image = o1.image + o2.image ; 

}

void print(void ){
cout << real << "+" << image << "i" << endl  ; 
}




};


int main() {

complex c1 , c2 , c3 ;

c1.setdata(2,4);
c1.print();
c2.setdata(1,3) ;
c2.print();

c3.sum(c1 , c2);
c3.print();
}