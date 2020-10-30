#include <iostream>
using namespace std;

struct dados
{
	char sexo;
	int idade;
	char resp;
};
int main(int argc, char **argv)
{
	int n, pos=0, neg=0, maior=0, menor=0, mneg=0, mpos=0;
	cin>>n;
	dados person[n];
	for( int i=0; i<n; i++){
		cin>>person[i].sexo;
		cin>>person[i].idade;
		cin>>person[i].resp;
	}
	for( int i=0; i<n; i++){
		if( person[i].resp=='S'){
			pos++;
		}
		else{
			neg++;
		}
		if( person[i].resp=='S' and person[i].idade>=18){
			maior++;
		}
		if( person[i].resp=='N' and person[i].idade<18){
			menor++;
		}
		if (person[i].resp=='N' and person[i].idade>=18 and person[i].sexo=='F'){
			mneg++;
		}
		if(person[i].resp=='S' and person[i].idade<18 and person[i].sexo=='M'){
			mpos++;
		}
	}
	cout<<pos<<endl;
	cout<<neg<<endl;
	cout<<maior<<endl;
	cout<<menor<<endl;
	cout<<mneg<<endl;
	cout<<mpos<<endl;
	return 0;
}

