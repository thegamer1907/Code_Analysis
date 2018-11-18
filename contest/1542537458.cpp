#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <string>
#include <sstream>
using namespace std;


int main() {
	int h,m,s,t1,t2;
	int flag=0;
	double d[3];
	cin>>h>>m>>s>>t1>>t2;
	
	d[0]=h+m/60.0+s/3600.0;
	d[1]=m/5.0+s/300.0;
	d[2]=s/5.0;
	if(t1>t2)
	{
	    int temp=t1;
	    t1=t2;
	    t2=temp;
	}
	for(int i=0;i<3;i++)
	{
	    if(t1<d[i]&&d[i]<t2)
	    {
	        //cout << i<<'\n';
	        flag++;
	    }
	}
	//cout<<flag<<'\n';
	if(flag==0||flag==3)
	{
	    cout<<"YES";
	}
	else
	{
	    cout<<"NO";
	}
	//cout<<d[1];
	return 0;
}
