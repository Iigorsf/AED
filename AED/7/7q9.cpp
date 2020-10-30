#include <iostream>
using namespace std;

struct est
{
	int prod;
	double preco;
	int quant;
	string nome;
};
	
int main(int argc, char **argv)
{
	est estq[60];
	int n=-1, a=0 ,menor=0, c=0;
	bool b= false;
	do {
		n++;
		cin>>estq[n].prod;
		if (estq[n].prod!=0){
		cin>>estq[n].preco;
		cin>>estq[n].quant;
		cin>>estq[n].nome;
		}
	}
	while(estq[n].prod!=0);
	do {
		cin>>a;
		for(int i=0; i<n; i++){
		if(estq[i].prod==a){
		estq[i].quant=estq[i].quant-1;
		}	
		if( estq[i].quant<0){
			cout<<"erro 3221";
			b= true;
			}
		}
	}
	while(a!=0 and b==false);
	menor=estq[0].quant;
	if(b==false){
		for( int i=0; i<n; i++){
			if(estq[i].quant<menor){
				menor=estq[i].quant;
				c=i;
			}
		}
		cout<<estq[c].prod<<" ";
		cout<<estq[c].quant<<" ";
		cout<<estq[c].nome;
	}
	
	return 0;
}

