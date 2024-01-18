#include<iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	float a , b,c ,d,e,f,g,h,i;
	float m , n,l;
	a=-0.1;b=-0.163;c=-0.17;d=-0.055;e=0.1	;f=0.145	;g=0.201	;h=-0.336	,i=0, m=1.6	,n=-1.29	,l=0.144	; 
	float x=5 , y=5.6 ,z=-2.6;
	float valueone ,valuetwo,valuethree;
	
	for (int k=0 ; k<10;k++){
		x = a*x+b*y+c*z+m;
		cout<<x;
		cout<<"    ";
		y= d*x+e*y+f*z+n;
		cout<<y; 
		cout<<"   "; 
		z= g*x+h*y+i*z+l;
		cout<<z; 
		cout<<"\n";
	
		
	
	}
	
}


