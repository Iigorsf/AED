/*
 * 4q11.cpp
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
	int tam, pma=0, pme=500, pmed=-1;
	cin>>tam;
	int v[tam];
	float vma=0, vme=500, vmed=-1;
	for ( int i=0; i<tam; i++){
		cin>>v[i];
	}
	for ( int i=0; i<tam; i++){
		if(v[i]>pma){
			pma=v[i];
		}
		if(v[i]<pme){
			pme=v[i];
		}
		if(tam%2!=0){
			pmed=v[(tam-1)/2];
		}
		if(pma==v[i]){
			vma=i;
		}
		if(pme==v[i]){
			vme=i;
		}
		if(pmed==v[i]){
			vmed=i;
		}
	}
	cout<<pma<<endl;
	cout<<pme<<endl;
	cout<<pmed<<endl;
	cout<<vma<<endl;
	cout<<vme<<endl;
	cout<<vmed<<endl;
	return 0;
}

