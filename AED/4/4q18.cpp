/*
 * 4q18.cpp
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
	int a;
	cin>>a;
	char b[a];
	for (int i=0;i<a;i++){
		cin>>b[i];
	}
	char c;
	cin>>c;
	int d=0;
	d=-1;
	for (int i=0;i<a;i++){
		if(c==b[i]){
			d= i;
			cout<<d<<" ";
		}
	}
	if(d==-1){
			cout<<d;
		}
	return 0;
}

