/*
 * 3q4.cpp
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
	int a, b, c=0;
	cin>>a;
	for (int i=1;i<=a;i++){
		cin>>b;
		if(b==1){
			c=c+25;
		}
		if(b==2){
			c=c+18;
		}
		if(b==3){
			c=c+15;
		}
		if(b==4){
			c=c+12;
		}
		if(b==5){
			c=c+10;
		}
		if(b==6){
			c=c+8;
		}
		if(b==7){
			c=c+6;
		}
		if(b==8){
			c=c+4;
		}
		if(b==9){
			c=c+2;
		}
		if(b==10){
			c=c+1;
		}
	}
	cout<<c;
	return 0;
}

