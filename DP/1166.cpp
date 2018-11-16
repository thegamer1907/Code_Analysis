#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	string n,k;
	int  x;
	cin>>x;
	int arr[x];
	int mx = 0,onesTest = 0 ,ones = 0 , zero = 0;
	for(int i = 0 ; i < x ; i++)
	{
		cin>>arr[i];
		if(arr[i] == 1) ones++;
	}
	//cout<<"Hello"<<endl;
	int sz = x;
	for(int i = 0 ; i < x ;)
	{
		if( i == sz ){
			i++;
			sz=x;
		}
		for(int j = sz-1 ; j >= i ; j--)
		{
			if ( arr[j] == 0 ) zero++;
			else onesTest++;
		//	cout<<arr[j]<<" ";
		}
		//cout<<endl;
		//cout<< "Zero  "<< zero << "  Ones "<< ones<<" OnesTest "<< onesTest <<endl;
		mx = max( mx , zero + (ones - onesTest) );
		//cout<<mx<<endl;
		onesTest = 0;
		zero = 0;
		sz--;
		if(i+1 == x) break;
	}
	cout<<mx<<endl;
	return 0;
}
