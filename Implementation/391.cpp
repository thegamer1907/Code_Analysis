/*
 * next.cpp
 *
 *  Created on: 07-Nov-2018
 *      Author: rey10
 */
#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int n,k,i,c=0;
	cin >> n >> k;
	int round[n];
	for(i=0;i<n;i++)
    	cin >> round[i];
    for(i=0;i<n;i++)
    	if(round[i]&&round[i]>=round[k-1])c++;
    	cout<<c;
	return 0;
}



