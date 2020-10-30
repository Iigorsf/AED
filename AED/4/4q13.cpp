/*
 * 4q13.cpp
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
	int n, n2, n3=0;
	cin>>n;
	int v[n];
	for( int i=0; i<n; i++){
		cin>>v[i];
	}
	cin>>n2;
	int v2[n2];
	for( int i=0; i<n2; i++){
		cin>>v2[i];
	}
	if(n>n2){
		n3=n;
	}
	else{
		n3=n2;
	}
	int v3[n3],a=0,l=0;
	for( int i=0; i<n3; i++){
		v3[i]=0;
	}
		for(int i=0; i<n; i++){
			for( int j=0; j<n2; j++){
				if(v[i]==v2[j]){
					if(v3[l]!=v[i]){
					v3[l]= v[i];
					a++;
					l++;
				}
			}
			}
		}
	if(a!=0){
		for(int i=0; i<a; i++){
		cout<<v3[i]<<" ";
		}
	}
	else{
		cout<<"INTERSECAO VAZIA";
	}
	return 0;
}

