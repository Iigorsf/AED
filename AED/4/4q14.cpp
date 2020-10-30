#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	cin>>n;
	char v[n];
	for( int i=0; i<n; i++){
		cin>>v[i];
	}
	char v2[2], a=0, b=0, c=0;
	for(int i=0; i<2; i++){
		cin>>v2[i];
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<2; j++){
			if(v[i]==v2[j] and c==0){
				a=i;
				c=1;
			}
			if(v[i]==v2[j] and c==1){
				b=i;
			}
		}
	}
		for(int i=a+1; i<b; i++){
			cout<<v[i]<<" ";
		}
	return 0;
}

