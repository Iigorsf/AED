#include <iostream>
using namespace std;

int igor( int n, char a, int b)
{
	int soman=1, somab=1, resp;
	while( n!=0){
		soman= soman*n;
		n--;
	}
	while( b!=0){
		somab= somab*b;
		b--;
	}
	if( a=='+'){
		resp=soman+somab;
	}
	if( a=='-'){
		resp=soman-somab;
	}
	if( a=='*'){
		resp=soman*somab;
	}
	if( a=='/'){
		resp=soman/somab;
	}
	return resp;
}
int main(int argc, char **argv)
{
	int a, b;
	char c;
	cin>>a>>c>>b;
	cout<<igor(a,c,b);
	return 0;
}

