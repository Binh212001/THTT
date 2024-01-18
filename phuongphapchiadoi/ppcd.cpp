#include<iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	cout<<"aX^3+bX^2+cX+d";
	
	double  a = 2,b=0,c=-5.1,d=-14.3 , x=1.2 ,y=2.93;
	

	double z = (x+y)/2;
	
	for(int i = 0; i<13; i++){
		
		double value1 , value2;
		value1 = ((a*pow(x,3)))+ (b*pow(x,2))+c*x+d;
	  	value2 = (a*pow(z,3))+ b*pow(z,2)+c*z +d;
	  	
	  	if((value1> 0 and value2>0)or(value1<0 and value2<0)){
		  x=z;
		  }else{
		  	y=z;
		  }
		z = (x+y)/2;
		cout<<i+1 ;
		cout<<"       ";
		cout<<setprecision(15)<<x;
		cout<<"-----";
		cout<<setprecision(15)<<y;
		cout<<"-----";
		cout<<setprecision(15)<<z;
		cout<<"\n";
		  
	}
}


