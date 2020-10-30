#include <iostream>
#include <math.h>
using namespace std;

struct ponto
{
	double x;
	double y;
};

double elev(int y, double x )
{
	double dis = x;
	for(int i=0; i<y; i++){
		 dis= x*x;
	 }
	 return dis;
 }
	
int main(int argc, char **argv)
{
	float dis=0;
	int v[5];
	ponto pontos[5];
	for( int i=0; i<5; i++){
		cin>>pontos[i].x;
		cin>>pontos[i].y;
	}
	for( int i=0; i<5; i++){
		cin>>v[i];
	}
	for( int i=0; i<4; i++){
		dis = dis + sqrt(elev(2,(pontos[v[i]].x-pontos[v[i+1]].x))+(elev(2,pontos[v[i]].y-pontos[v[i+1]].y)));
	}
	cout<<dis;
	return 0;
}

