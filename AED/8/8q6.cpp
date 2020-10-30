#include <iostream>
using namespace std;

string xo(int x, int y)
{
	int r;
	r= x+y;
	if( r==1){
		return "True";
	}
	else{
		return "False";
	}
}

int main(int argc, char **argv)
{
	int x, y;
	cin>>x>>y;
	cout<<xo(x,y);
	return 0;
}

