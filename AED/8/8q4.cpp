#include <iostream>
using namespace std;

string mes(int i)
{
	string v[13];
		v[1]="janeiro";
		v[2]="fevereiro";
		v[3]="marco";
		v[4]="abril";
		v[5]="maio";
		v[6]="junho";
		v[7]="julho";
		v[8]="agosto";
		v[9]="setembro";
		v[10]="outubro";
		v[11]="novembro";
		v[12]="dezembro";
		if( i>=1 and i<=12){
			return v[i];
		}
		else{
			return "erro";
		}
	}
int main(int argc, char **argv)
{
	int x;
	cin>>x;
	cout<<mes(x);
	return 0;
}

