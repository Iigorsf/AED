#include <iostream>
using namespace std;

double Maximo(double x, double y)
{
	if( x>y){
		return x;
	}
	else{
		return y;
	}
}

int main(int argc, char **argv)
{
	double x, y;
	cin>>x>>y;
	cout<<Maximo(x,y);
	return 0;
}

