#include <iostream>
using namespace std;

struct carro
{
	string nome;
	int ano;
	int preco;
};
int main(int argc, char **argv)
{
	int n, ref;
	cin>>n;
	carro carros[n];
	for( int i=0; i<n; i++){
		cin>>carros[i].nome;
		cin>>carros[i].ano;
		cin>>carros[i].preco;
	}
	cin>>ref;
	for( int i=0; i<n; i++){
		if(carros[i].preco<ref){
			cout<<carros[i].nome<<" ";
			cout<<carros[i].ano<<" ";
			cout<<carros[i].preco<<" "<<endl;
		}
	}
	return 0;
}

