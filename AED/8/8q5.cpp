#include <iostream>
using namespace std;

int baixo( double x)
{
	int y;
	y=x;
	return y;
}

int cima( double x)
{
	double res;
	int p=x;
	res= x-p;
	if(res!=0){ return p+1;}
	else{ return p;}
}

int round( double x)
{ 
	double res;
	int p=x;
	res= x-p;
	if(res>=0.5){ return p+1;}
	else{ return  p;}
}
int main(int argc, char **argv)
{
	double n;
	cin>>n;
	cout<<baixo(n)<<endl;
	cout<<cima(n)<<endl;
	cout<<round(n)<<endl;
	return 0;
}

