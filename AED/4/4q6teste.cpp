/*
 * 4q6teste.cpp
 * 
 * Copyright 2018 Igor Soares <Igor Soares@LAPTOP-6OT29JIQ>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	string palavra;
	cin>>palavra;
	int cont=0, tam;
	tam = palavra.size();
	char vogais[5];
	vogais[0]="a";
	vogais[1]="b";
	vogais[2]="c";
	vogais[3]="d";
	vogais[4]="e";
	for ( int i=0 ; i<tam ; i++ ){
		if( palavra[i]==vogais[0] ){
			cont++;
		}
		if( palavra[i]==vogais[1] ){
			cont++;
		}
		if( palavra[i]==vogais[2] ){
			cont++;
		}
		if( palavra[i]==vogais[3] ){
			cont++;
		}
		if( palavra[i]==vogais[4] ){
			cont++;
		}
	}
	
	cout<<cont;
	return 0;
}

