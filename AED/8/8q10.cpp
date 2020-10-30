#include <iostream>
using namespace std;

float igor( string n, char a)
{
	int tam, bla=0;
	float soma=0 , med ;
	tam=n.size();
	for( int i=0 ; i<tam; i++){
		if( n[i]==a){
			soma++;
		}
	}
	for( int i=0 ; i<tam; i++){
		if( n[i]==' '){
			bla++; 
		}
	}
	tam= tam-bla;
		med= soma/tam;
		return med;
}
int main(int argc, char **argv)
{
	string a;
	getline(cin, a);
	char b;
	cin>>b;
	cout<<igor(a, b);
	return 0;
}

