/*
 * 4q7.cpp
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
	int v1[10], v2[5], c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, c7=0, c8=0, c9=0, c10=0;
	
	for( int i=0; i<10; i++){
		cin>>v1[i];
	}
	for( int i=0; i<5; i++){
		cin>>v2[i];
	}
	
	for( int i=0; i<5; i++){
		if( v1[0]%v2[i]==0){
			c1++;
		}
		if( v1[1]%v2[i]==0){
			c2++;
		}
		if( v1[2]%v2[i]==0){
			c3++;
		}
		if( v1[3]%v2[i]==0){
			c4++;
		}
		if( v1[4]%v2[i]==0){
			c5++;
		}
		if( v1[5]%v2[i]==0){
			c6++;
		}
		if( v1[6]%v2[i]==0){
			c7++;
		}
		if( v1[7]%v2[i]==0){
			c8++;
		}
		if( v1[8]%v2[i]==0){
			c9++;
		}
		if( v1[9]%v2[i]==0){
			c10++;
		}
	}
	cout<<v1[0]<<" "<<c1<<endl;
	cout<<v1[1]<<" "<<c2<<endl;
	cout<<v1[2]<<" "<<c3<<endl;
	cout<<v1[3]<<" "<<c4<<endl;
	cout<<v1[4]<<" "<<c5<<endl;
	cout<<v1[5]<<" "<<c6<<endl;
	cout<<v1[6]<<" "<<c7<<endl;
	cout<<v1[7]<<" "<<c8<<endl;
	cout<<v1[8]<<" "<<c9<<endl;
	cout<<v1[9]<<" "<<c10<<endl;
			
	
	return 0;
}

