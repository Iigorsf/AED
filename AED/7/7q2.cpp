#include <iostream>
using namespace std;

struct nutri
{
	string nome;
	char sexo;
	float altura;
	float peso;
};

int main(int argc, char **argv)
{
	int n, pesom=0;
	cin>>n;
	nutri paciente[n];
	float maior, peso[n], pesod[n];
	
	for( int i=0; i<n; i++){
		cin>>paciente[i].nome;
		cin>>paciente[i].sexo;
		cin>>paciente[i].altura;
		cin>>paciente[i].peso;
	}
	
	for( int i=0; i<n ; i++){
		if(paciente[i].sexo=='H'){
			peso[i]=72.7*paciente[i].altura-58;
		}
		else if(paciente[i].sexo=='M'){
			peso[i]=62.1*paciente[i].altura-44.7;
	}
}
	maior= paciente[0].peso;
	
	for( int i=0; i<n ; i++){
		if(paciente[i].peso > maior){
			maior=paciente[i].peso;
			pesom = i;
		}
	}
	cout<<paciente[pesom].nome<<endl;
	for( int i=0; i<n ; i++){
		if( peso[i] < paciente[i].peso){
			pesod[i]= peso[i]-paciente[i].peso;
			cout<<paciente[i].nome<<" ";
			cout<<pesod[i]<<endl;
		}
	}
	for( int i=0; i<n ; i++){
		if( peso[i]> paciente[i].peso){
			pesod[i]= peso[i]-paciente[i].peso;
			cout<<paciente[i].nome<<" ";
			cout<<pesod[i]<<endl;
		}
	}
	
	return 0;
}

