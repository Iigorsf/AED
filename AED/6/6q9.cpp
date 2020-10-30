#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	char gabarito[8], alunos[10][8];
	float acertos= 0, nota[10], aprovacoes=0, aprovados;
	for( int i=0; i<8; i++){
		cin>>gabarito[i];
	}
	for( int i=0; i<10; i++){
		for( int j=0; j<8; j++){
			cin>>alunos[i][j];
		}
	}
	for( int i=0; i<10; i++){
		for( int j=0; j<8; j++){
			if(gabarito[j]==alunos[i][j]){
				acertos++;
		}
		nota[i] = (acertos*100)/8;
		}
		acertos=0;
	}
	for( int i=0; i<10; i++){
	cout<<nota[i]<<endl;
	if( nota[i]>=60){
		aprovacoes++;
		}
	}
	cout<<endl;
	aprovados = (aprovacoes*100)/10;
	cout<<aprovados;
	return 0;
}

