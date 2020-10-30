#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int matriz[n][n], menor=100, lmenor;
    for( int i=0; i<n; i++){
		for( int j=0; j<n; j++){
			cin>>matriz[i][j];
		}
	}
	for( int i=0; i<n; i++){
		for( int j=0; j<n; j++){
			if(matriz[i][j]<menor){
				menor=matriz[i][j];
				lmenor=i;
			}
		}
	}
	cout<<lmenor;
    return 0;
}
