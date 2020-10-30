/*
 * 2q9.cpp
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
	double a, b;
	cin>>a>>b;
	if (a<20 and b<60){
		cout<<9;
	}
	else if (a<20 and b>=60 and b<=90){
		cout<<8;
	}
	else if (a<20 and b>90){
		cout<<7;
	}
	else if (a>=20 and a<=50 and b<60){
		cout<<6;
	}
	else if (a>=20 and a<=50 and b>=60 and b<=90){
		cout<<5;
	}
	else if (a>=20 and a<=50 and b>90){
		cout<<4;
	}
	else if (a>50 and b<60){
		cout<<3;
	}
	else if (a>50 and b>=60 and b<=90){
		cout<<2;
	}
	else{
		cout<<1;
	}
	return 0;
}

