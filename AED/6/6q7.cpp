#include <iostream>
using namespace std;

int main()
{
    int matriz[10][10], maior, linha=0, minimax, coluna=0;
    
    for( int i=0; i<10; i++){
		for( int j=0; j<10; j++){
			cin>>matriz[i][j];
		}
	}
	
	maior = matriz[0][0];
	
	for( int i=0; i<10; i++){
		for( int j=0; j<10; j++){
			if(matriz[i][j]>maior){
				maior=matriz[i][j];
				linha=i;
			}
		}
	}
	minimax = matriz[linha][0];
	for( int i=linha; i<linha+1; i++){
		for( int j=0; j<10; j++){
			if(matriz[i][j]<minimax){
				minimax=matriz[i][j];
				coluna = j;
			}
		}
	}
	cout<<minimax<<endl;
	cout<<linha<<" "<<coluna;
    return 0;
}
