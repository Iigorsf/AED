/*
 * 4q8.cpp
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
	int a, maior=0, n=0;
	cin>>a;
	int tam[a];
	string palavra[a];
	for ( int i=0; i<a ; i++){
		cin>>palavra[i];
		
	}
	for ( int i=0; i<a; i++){
	tam[i] = palavra[i].size();
	}
	for(int i=0; i<a ; i++){
		if(tam[i]>=maior){
			maior = tam[i];
		}
	}
	while (n<a){
		if(tam[n] < maior){
			for(int i = 0; i < (maior-tam[n]);i++){
				cout<<"*";
			}
		}
		cout<<palavra[n]<<endl;
		n++;
	}
	return 0;
}

