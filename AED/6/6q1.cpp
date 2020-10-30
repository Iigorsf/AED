#include <iostream>
using namespace std;

int main()
{
    int matriz[3][4], pares=0, impares=0;
    float media, soma=0;
    for( int i=0; i<3; i++){
		for( int j=0; j<4; j++){
			cin>>matriz[i][j];
		}
	}
	for( int i=0; i<3; i++){
		for( int j=0; j<4; j++){
			if(matriz[i][j]%2==0){
				pares++;
			}
			else{
				impares++;
			}
			soma= soma+matriz[i][j];
		}
	}
	media= soma/12;
	cout<<pares<<endl;
	cout<<impares<<endl;
	cout<<media<<endl;
    return 0;
}
