#include <iostream>
using namespace std;

float resp( float n)
{
	float soma=0, a=2, m=3;
	while( a<=n){
		soma= soma+(a/m);
		a++;
		m=m+2;
	}
	return soma;
}

int main(int argc, char **argv)
{
	int n;
	cin>>n;
	bool x=true;
	if( n<0){
		x=false;
	}
	if( x==true){
		cout<<resp(n);
	}
	if( x==false){
		cout<<"ERRO";
	}
	return 0;
}

