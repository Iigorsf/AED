/*
 * 4q9.cpp
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
	int v[10], k, novo, pos, aux, bla, bla2;
	for(int i=0; i<10; i++){
		v[i]=0;
	}
	
	cin>>k;
	
	for( int i=0 ; i<k ; i++){
		cin>>v[i];
	}
	
	cin>>novo;
	cin>>pos;
	
	for(int i=0; i<1; i++){
		aux=v[pos];
	v[pos]=novo;
	}
	for(int i=pos+1; i<10; i++){
		bla2=v[i+1];
		if(i==pos+1){
			bla=v[i];
			v[i]=aux;	
		}
		v[i+1]=bla;
		bla=bla2;
	}
	
	for (int i = 0; i < 10; i++)
	{
		cout << v[i];
		cout << " ";
	}
	
	
	return 0;
}

