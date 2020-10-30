#include <iostream>
using namespace std;

float Media(float x, float y)
{
	float med;
	med=(x+y)/2;
	return med;
}

int main(int argc, char **argv)
{
	float x, y;
	cin>>x>>y;
	cout<<Media(x,y);
	return 0;
}

