#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int matriz[n][n], matrizt[n][n];
    bool a=true;
    for( int i=0; i<n; i++){
		for( int j=0; j<n; j++){
			cin>>matriz[i][j];
		}
	}
    for( int i=0; i<n; i++){
		for( int j=0; j<n; j++){
			matrizt[i][j]=0;
		}
	}
    for( int i=0; i<n; i++){
		for( int j=0; j<n; j++){
			if(i!=j){
				if(matriz[i][j]!=matrizt[i][j]){
					a = false;
					i=n;
					j=n;
				}
			}
		}
	}
	
	if(a==false){
		cout<<0;
	}
	else{
		cout<<1;
	}
    return 0;
}
