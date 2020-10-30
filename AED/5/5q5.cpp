/*
 * 5q5.cpp
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
	int n, soma=0, aux, j, a;
	cin>>n;
	int v[n];
	for( int i=0; i<n; i++){
		cin>>v[i];
	}
	cin>>a;
	for( int i=1; i<n; i++){
		aux=v[i];
		j=i-1;
		while(j>=0 and aux<v[j]){
			v[j+1]=v[j];
			j--;
		}
		v[j+1]=aux;
		}
		for(int i=n-1; i>=n-a; i--){
			soma = soma + v[i]; 
		}
		cout<<soma;
	return 0;
}

