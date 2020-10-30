#include <iostream>
using namespace std;

struct atleta
{
	string nome;
	string esport;
	int idade;
	float altura;
};

int main(int argc, char **argv)
{
	int velho , maior1=0, velho1=0;
	float maior;
	atleta atl[5];
	for( int i=0; i<5; i++){
		cin>>atl[i].nome;
		cin>>atl[i].esport;
		cin>>atl[i].idade;
		cin>>atl[i].altura;
	}
	maior=atl[0].altura;
	velho=atl[0].idade;
	for( int i=0; i<5; i++){
		if(atl[i].altura>maior){
			maior=atl[i].altura;
			maior1=i;
		}
		if(atl[i].idade>velho){
			velho=atl[i].idade;
			velho1=i;
		}
	}
	cout<<atl[maior1].nome<<" "<<atl[maior1].esport<<endl;
	cout<<atl[velho1].nome<<" "<<atl[velho1].esport<<endl;
	
	return 0;
}

