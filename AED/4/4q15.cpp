/*
 * 4q15.cpp
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
	int v[10], v2[10], vc=0, v2p=0;
	for(int i=0; i<10; i++){
		cin>>v[i];
	}
	for(int i=0; i<10; i++){
		cin>>v2[i];
	}
	int a=1, b=0, c=0, d=0;
	while(a==1){
		cin>>a>>b>>c;
		for( int i=0; i<10; i++){
			if(b==v[i]){
				if(v2[i]-c>=0){
				v2[i]= v2[i]-c;
				
			}
			else{
				v2p++;
			}
			}
			else{
				d++;
			}
			}
		if(d==10){
			vc++;
		}
		if(a!=0){
			a=1;
		}
		d=0;
	}
	for( int i=0; i<10; i++){
		cout<<v[i]<<" "<<v2[i]<<endl;
	}
	cout<<vc<<endl;
	cout<<v2p<<endl;
	return 0;
}

