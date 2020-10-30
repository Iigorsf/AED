#include <iostream>
using namespace std;

int main(int argc, char **argv)
{int n, imp[7], par[7], cont1=0, cont2=0, cont3=0, j=0, i=0; 
	while (cont1<8){
	cin >> n;
	cont1++;
	if (n%2==0){
		par[j] = n;
		cont2++;
		j++;
		 }else {
			 imp[i]=n;
			 cont3 ++;
			 i++;}}
			 j=0; i=0;
			 while (j<cont2) {
				 cout << par[j]<< " ";
				 j++;}
				 cout << endl;
				 while (i<cont3) {
					 cout << imp[i] << " ";
					 i++;
				 }
	return 0;
}

