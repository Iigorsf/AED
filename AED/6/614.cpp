#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double matriz[n][n],soma=0, media;
    for( int i=0; i<n; i++){
		for( int j=0; j<n; j++){
			cin>>matriz[i][j];
		}
	}
    for( int i=0; i<n; i++){
		for( int j=0; j<n; j++){
			if(i==j){
				soma= soma+ matriz[i][j];
			}
		}
	}
	media= soma/n;
	cout<<media;
    return 0;
}
