#include <iostream>
using namespace std;

float tem(double x, string y)
{
	double temp;
	if( y=="FAHRENHEIT"){
		temp= x*1.8+32;
	}
	else if( y=="CELSIUS"){
		temp= (x-32)/1.8;
	}
	return temp;
}

int main(int argc, char **argv)
{
	double x;
	bool t=true;
	string y;
	cin>>x;
	cin>>y;
	if(y != "CELSIUS" and y!="FAHRENHEIT"){
		t = false;
	} 
	if( t == true){
		cout<<tem(x,y)<<" ";
		if( y=="CELSIUS"){
		cout<<"o.C";
		}
		if(y=="FAHRENHEIT"){
		cout<<"o.F";
		}
	}
	else{
		cout<<"ERRO";
	}
	return 0;
}

