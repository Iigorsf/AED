#include <iostream>
using namespace std;

struct crianca
{ 
	string nome;
	string prest;
	int bom;
	int ruim;
};

int main(int argc, char **argv)
{
	int n, res=0;
	cin>>n;
	crianca criancas[n];
	bool a=false;
	for( int i=0; i<n; i++){
		cin>>criancas[i].nome;
		cin>>criancas[i].prest;
		cin>>criancas[i].bom;
		cin>>criancas[i].ruim;
	}
	for( int i=0; i<n; i++){
		res = criancas[i].bom-criancas[i].ruim;
		if( res <= 0){
			cout<<criancas[i].nome<<endl;
			a = true;
		}
	}
	if(a == false){
		cout<<"Ninguem";
	}	
	return 0;
}

