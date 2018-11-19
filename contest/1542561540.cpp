#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<bits/stdc++.h>
#include<queue>
#define FOR0(i,n) for(i=0;i<n;i++)
#define FOR(i,j,n) for(i=j;i<n;i++)
#define FORD(i,j,k) for(i=j;i>=k;i--)
inline long long  MAX2(long long  a, long long int b){return (a)>(b)?(a):(b);}
inline long long  MAX3(long long  a, long long  b,long long  c){return (a)>(b)?((a)>(c)?(a):(c)):((b)>(c)?(b):(c));}
inline long long  MIN2(long long  a, long long  b){return (a)<(b)?(a):(b);}
inline long long  MIN3(long long  a, long long b,long long c){return (a)<(b)?((a)<(c)?(a):(c)):((b)<(c)?(b):(c));}
using namespace std;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector< pair<int,int> > vii;
typedef long long ll;
int main()
{
	int h,i,m,s,t1,t2,obs1,obs2,obs3;
	cin>>h>>m>>s>>t1>>t2;
	if(h==12)
	  h=0;
	if(t1==12)
		t1=0;
	t1= t1*3600;
    if (t2==12)
		t2=0;
	t2=t2*3600;
	obs1= 3600*h + 60*m + s;
    obs2= 720*m + 12*s;
    obs3= 720*s;	
	vi path;
	for(i=t1;;i++)
	{
		path.push_back(i);
		if(i==t2)break;
		if(i==43199)
			i=-1;
	}
	FOR(i,1,path.size()-1)
		if(path[i]==obs1||path[i]==obs3||path[i]==obs2)
			break;
    if(i==path.size()-1)
	{	cout<<"YES"; return 0;}
    path.clear();
	for(i=t1;;i--)
	{
		path.push_back(i);
		if(i==t2)break;
		if(i==0)
			i=43200;
	}
	FOR(i,1,path.size()-1)
		if(path[i]==obs1||path[i]==obs3||path[i]==obs2)
			break;
	if(i==path.size()-1)
	{cout<<"YES"; return 0;}
    cout<<"NO";
		
}