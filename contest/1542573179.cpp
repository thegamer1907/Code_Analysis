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
	
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	arr[h*5]=1;
	if(m==0)arr[60]=1;
	else {
	arr[m]=1;
	arr[h*5]=0;
	arr[h*5+1]=1;
     }
	if(s==0)arr[60]=1;
	else {
	 arr[s]=1;
	 arr[h*5]=0;
	 arr[h*5+1]=1;
     }
	
	arr[t1*5]+=2;
	arr[t2*5]+=2;
	int c=0;
	for(int i=1;i<65;i++,c++)
	{
		if(arr[i]==2)
		{
			i++;
			while(c<200)
			{
				if(arr[i]>=2)
				{
					//cout<<arr[i]<<endl;
					//if(arr[i]==2)
					//{
					cout<<"YES"<<endl;
					return 0;//}
					//else break;
				}
				if(arr[i]==1)
				{
					break;
				}
				i++;
				if(i==65)i=1;
			}
			c++;
			break;
		}
	}
	c=0;
	for(int i=1;i<65;i++,c++)
	{
		if(arr[i]>=2)
		{
			i--;
			while(c<200)
			{
				if(arr[i]==2)
				{
					cout<<"YES"<<endl;
					return 0;
				}
				if(arr[i]==1||arr[i]>2)
				{
					cout<<"NO"<<endl;
					return 0;
				}
				i--;
				if(i==0)i=65;
				c++;
			}
		}
	}
		
	return 0;
}