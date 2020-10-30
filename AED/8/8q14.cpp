#include <iostream>
using namespace std;

int soma( int a)
{
	int somal=0;
	while ( a != 0 ) {
		somal += a % 10 ;
		a /= 10;
	}
	return somal;
}

string resp( int a)
{
	if( a % soma(a) ==0){
		return "True";
	}
	else{
		return "False";
	}
}

int main(int argc, char **argv)
{
	int a;
	cin>>a;
	cout<<resp(a);
	return 0;
}

