/*
 * 3q11.cpp
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
	int a,b,n;
	cin>>a;
	bool imprimiu = false;
	n=1;
	while(n<5){
		cin>>b;
		if (a<b and imprimiu == false){
			a=b;
		}
		else{
			imprimiu = true;
		}
		n++;
	}
	if (imprimiu == false){
		cout<<1;
	}
	if ( imprimiu == true){
		cout<<0;
	}
	return 0;
}

