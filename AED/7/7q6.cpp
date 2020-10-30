#include <iostream>
using namespace std;

struct ponto
{
	int x;
	int y;
};

int main(int argc, char **argv)
{
	int menor=0, pos=1 , x[5], y[5];
	ponto pontos[5];
	for( int i=0; i<5; i++){
		cin>>pontos[i].x;
		cin>>pontos[i].y;
	}
	for( int i=1; i<5 ; i++){
		x[i]=pontos[0].x-pontos[i].x;
		if(x[i]<0){
			x[i]=-x[i];
		}
		y[i]=pontos[0].y-pontos[i].y;
		if(y[i]<0){
			y[i]=-y[i];
		}
	}
	menor= x[1]+y[1];
	for(int i=1; i<5; i++){
		if(x[i]+y[i]<menor){
			menor=x[i]+y[i];
			pos=i;
		}
	}
	cout<<pontos[pos].x<<" "<<pontos[pos].y;
	return 0;
}

