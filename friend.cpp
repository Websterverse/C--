#include<iostream>
using namespace std ;

class complex {

int real ;
int img ;

public :
friend complex sum(complex c1 , complex c2) ;

void setdata(int a  , int b){
real = a ;
img = b ; 
}


void getdata(){
cout << real << "+" << img  << endl  ; 
}
};


complex sum(complex c1  , complex c2 ){
complex c3 ;

c3.real = c1.real  + c2.real; 
c3.img = c1.img + c2.img ; 

return c3 ;

}


int main() {

complex C1 , C2 , C3 ;

C1.setdata(12,3);
C1.getdata();
C2.setdata(2,15);
C2.getdata();


C3 = sum(C1, C2);

C3.getdata() ; 


}