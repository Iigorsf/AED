#include <iostream>
using namespace std;

string correto( char a, char b , int c, string d[] )
{
	int tam [c];
	for( int i=0; i<c; i++){
		tam [i] = d[i] .size();
	}
	for ( int i=0; i<c; i++){
		for( int j=0; j<tam[i]; j++){
			if( d[i][j]==b){
				d[i][j]=a;
			}
		}
	}
	for( int i=0; i<c; i++){
		cout<< d[i]<< endl ;
	}
	return 0;
}

int main(int argc, char **argv)
{
	char a, b;
	cin>>a>>b;
	int c;
	cin>>c;
	string d[c];
	for( int i=0; i<c; i++){
		cin>>d[i];
	}
	cout<<correto(a,b,c,d)<<endl;
	return 0;
}

