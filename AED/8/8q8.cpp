#include <iostream>
using namespace std;

float soma( int b)
{
	float x=0;
	float n=1;
	for( int i=0; i<b; i++){
		x= x+(n*(n+1))/(n+3);
		n++;
	}
	return x;
}
int main(int argc, char **argv)
{
	int a;
	cin>>a;
	cout<<soma(a);
	return 0;
}

