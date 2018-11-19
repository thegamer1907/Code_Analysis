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
    string pass,in;
	int right=0,left=0,i,n;
	cin>>pass;
	cin>>n;
	FOR0(i,n)
    {
		cin>>in;
		if(in==pass)
		{
			right=1;left=1;
		}
		 if(in[0]==pass[1])
			right=1;
		 if(in[1]==pass[0])
			left=1;
	}
	if(right&&left)
		cout<<"YES";
	else cout<<"NO";
}