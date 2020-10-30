#include <iostream>
using namespace std;

float med ( float v[], int a)
{
	float meio=0;
	if( a%2==0){
		meio= ((v[(a/2)-1])+(v[a/2]))/2;
	}
	else{
		meio = v[(a-1)/2];
	}
	return meio;
}
int main(int argc, char **argv)
{
	int a;
	cin>>a;
	float v[a];
	for( int i=0; i<a; i++){
		cin>>v[i];
	}
	cout<< med( v, a);
	return 0;
}

