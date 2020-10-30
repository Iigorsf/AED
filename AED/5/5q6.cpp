/*
 * 5q6.cpp
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
	float v[100], aux, med;
	int j, a=0;
	for(int i=0; i<100; i++){ 
		cin>>v[i];
		if(v[i]>0){
		a++;
		}
		else{
			i=99;
		}
	}
		for( int i=1; i< a ; i++){
			aux=v[i];
			j=i-1;
			while(j>=0 and aux<v[j]){
				v[j+1]=v[j];
				j--;
			}
			v[j+1]=aux;
		}
		if(a%2==0){
			med = (v[(a-1)/2]+v[(a+1)/2])/2;
		}
		else{
			med = v[(a-1)/2];
		}
		cout<<med;		
	return 0;
}

