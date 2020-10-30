#include <iostream>
using namespace std;

int main()
{
    int matriz [3][3], ganhador=0;
    for( int i=0; i<3; i++){
		for( int j=0; j<3; j++){
			cin>>matriz[i][j];
		}
	}
	
	for (int i = 0; i < 3; i++)
	{
		if (matriz[i][0]==1 and matriz[i][1]==1 and matriz[i][2]==1){
			ganhador=1;
		}
		else if (matriz[i][0]==2 and matriz[i][1]==2 and matriz[i][2]==2){
			ganhador=2;
		}
		else if (matriz[0][i]==1 and matriz[1][i]==1 and matriz[2][i]==1){
			ganhador=1;
		}
		else if (matriz[0][i]==2 and matriz[1][i]==2 and matriz[2][i]==2){
			ganhador=2;
		}
		
	}
	if (ganhador==0){
		if (matriz[0][0]==1 and matriz[1][1]==1 and matriz[2][2]==1){
			ganhador=1;
		}
		else if (matriz[0][0]==2 and matriz[1][1]==2 and matriz[2][2]==2){
			ganhador=2;
		}
		else if (matriz[0][2]==1 and matriz[1][1]==1 and matriz[2][0]==1){
			ganhador=1;
		}
		else if (matriz[0][2]==2 and matriz[1][1]==2 and matriz[2][0]==2){
			ganhador=2;
		}
	}
	cout<<ganhador;
    return 0;
}
