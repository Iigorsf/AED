#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	cin>>n;
	int matriz[n][n], a=1, b=n-1;
	float media1, media2, cont1=0, cont2=0, cont=0;
	for( int i=0; i<n; i++){
		for( int j=0; j<n; j++){
			cin>>matriz[i][j];
		}
	}
	  for( int i=0; i<n; i++){
		for( int j=0; j<a; j++){
			cont1= cont1+matriz[i][j];
			cont++;
		}
		a++;
	}
	media1= cont1/cont;
	cont=0;
	a=n-2;
	  for( int i=0; i<n; i++){
		for( int j=b; j>a; j--){
			cont2= cont2+matriz[i][j];
			cont++;
		}
			a--;
	}
	media2= cont2/cont;
	cout<<media1<<endl<<media2;
	return 0;
}

