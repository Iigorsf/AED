#include <iostream>
using namespace std;

struct pessoas
{
	float salario;
	int idade;
	int filhos;
};
int round( double supp)
{ 
	double res;
	int p=supp;
	res= supp-p;
	if(res>0.5){ return p+1;}
	else{ return  p;}
}
	
int main(int argc, char **argv)
{
	int n, maior;
	double meds, medf, somas=0, somaf=0,  sup=0, supp;
	cin>>n;
	pessoas pessoa[n];
	for( int i=0; i<n; i++){
		cin>>pessoa[i].salario;
		cin>>pessoa[i].idade;
		cin>>pessoa[i].filhos;
	}
	maior=pessoa[0].salario;
	for( int i=0; i<n; i++){
		somas= somas+pessoa[i].salario;
		somaf= somaf+pessoa[i].filhos;
		if(pessoa[i].salario>maior){
			maior=pessoa[i].salario;
		}
		if(pessoa[i].salario>1000){
			sup++;
		}
	}
	meds=somas/n;
	medf=somaf/n;
	supp=(sup*100)/n;
	cout<<meds<<endl;
	cout<<medf<<endl;
	cout<<maior<<endl;
	cout<<round(supp)<<"%"<<endl;
	return 0;
}

