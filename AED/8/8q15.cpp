#include <iostream>
using namespace std;

string vetor( int a, int v[])
{
	cout<<"[";
	for( int i=0; i<a; i++){
		if( i!=0){
			cout<< " ";
		}
		cout<< v[i];
		if( i!=( a-1)){
			cout<< ",";
		}
	}
	return "]" ;
	cout<< endl;
}
		
int main(int argc, char **argv)
{
	int a;
	cin>>a;
	int v[a];
	for( int i=0; i<a; i++){
		cin>>v[i];
	}
	cout<<vetor( a , v);
	
	return 0;
}

