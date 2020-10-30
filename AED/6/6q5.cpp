#include <iostream>
using namespace std;

int main()
{
    int n, n2;
    cin>>n>>n2;
    int matriz[n][n2], matrizt[n2][n];
    for( int i=0; i<n; i++){
		for( int j=0; j<n2; j++){
			cin>>matriz[i][j];
		}
	}
	for( int i=0; i<n2; i++){
		for( int j=0; j<n; j++){
			matrizt[i][j]=matriz[j][i];
		}
	}
	for( int i=0; i<n2; i++){
		for( int j=0; j<n; j++){
			cout<<matrizt[i][j]<<" ";
		}
		cout<<endl;
	}
    return 0;
}
