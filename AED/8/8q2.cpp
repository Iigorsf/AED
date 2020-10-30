#include <iostream>
using namespace std;

int soma(int x, int y)
{
	int c;
	c= x+y;
	return c;
}
int main(int argc, char **argv)
{
	int x,y;
	cin>>x>>y;
	cout<<soma(x,y);
	return 0;
}

