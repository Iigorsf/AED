#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int a, n=0 , meio=0, cont=0, c, d=-1, cont2=0;
	cin>>a;
	int b[a];
	for ( int i=0 ; i<a ; i++ ){
		cin>>b[i];
	}
	cin>>c;
	for ( int i=0 ; i<a ; i++){
		cont2++;
		if( b[i]==c and d==-1){
			cout<<i<<endl;
			cout<<cont2<<endl;
			d=1;
		}
	}
	a= a-1;
	while (n<=a ){
		meio = (n+a)/2;
		cont++;
		if ( b[meio]==c ){
			cout<<cont<<endl;
			n=a+1;
		}
		else if ( c<b[meio] ){
			a= meio-1;
		}
		else {
			n= meio+1;
		}
	}		
	if (d==-1)
	cout<<d<<endl;
	return 0;
}

