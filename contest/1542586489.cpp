#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <sstream>
#include <vector>
#include <queue>
#include <string>
#include <stdio.h>
#include <string.h>
#include <functional>    //for hash
#include <bitset>        //for binary
using namespace std;
int arr[100];
int main()
{
    ios_base::sync_with_stdio(false);
	//cout.precision(30);
	
	/*int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	arr[h*5]=1;
	if(m==0)arr[60]=1;
	else arr[m]=1;
	if(s==0)arr[60]=1;
	else arr[s]=1;
		
	arr[t1*5]=2;
	arr[t2*5]=2;
	for(int i=1;i<65;i++)
	{
		if(arr[i]==2)
		{
			
		}
	}*/
	string s;
	cin>>s;
	int n;
	cin>>n;
	string y;
	bool f=0,f1=0;
	for(int i=0;i<n;i++)
	{
		cin>>y;
		if(y[0]==s[1])
		{
			f=1;
		}
		if(y[1]==s[0])
		{
			f1=1;
		}
		if(s==y)
		{
			f1=1;
			f=1;
			break;
		}
	}
	if(f&&f1)
	{
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
		
	return 0;
}