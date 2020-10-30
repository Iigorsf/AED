#include <iostream>
using namespace std;

int ver( int a, int b)
{
	int res, resp , respo;
	res = ((a/100000*7) + (((a%100000)/10000)*6) + ((((a%100000)%10000)/1000)*5) + (((((a%100000)%10000)%1000)/100)*4) + ((((((a%100000)%10000)%1000)%100)/10)*3) + ((((((a%100000)%10000)%1000)%100)%10)*2));
	resp= res % b;
	respo= b - resp;
	return respo;
}
int main(int argc, char **argv)
{
	int a,b;
	cin>>a>>b;
	cout<<ver(a,b);
	return 0;
}

