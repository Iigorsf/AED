#include <iostream>
using namespace std;

struct cart
{
	string nome;
	string pedido;
};
struct brin
{
	string br;
	int qd;
	int qp;
};
	
int main(int argc, char **argv)
{
	int n, nb;
	cin>>n;
	cart carta[n];
	for ( int i=0; i<n; i++){
		cin>>carta[i].nome;
		cin>>carta[i].pedido;
	}
	cin>>nb;
	brin brinq[nb];
	for ( int i=0; i<nb; i++){
		cin>>brinq[i].br;
		cin>>brinq[i].qd;
		brinq[i].qp=0;
	}
	for( int i=0; i<n; i++){
		for( int j=0; j<nb; j++){
			if( carta[i].pedido==brinq[j].br){
				brinq[j].qp++;
			}
		}
	}
	
	for( int i=0; i<nb; i++){
	if( (brinq[i].qd-brinq[i].qp)<0){
		cout<<brinq[i].br<<" ";
		}
	}
	return 0;
}

