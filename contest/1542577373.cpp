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
	int i,n,k,j;
	int ar[100005][5]={};
	cin>>n>>k;
	FOR0(i,n)
	{
		FOR0(j,k)
		cin>>ar[i][j];
	}
	int flag=0;
	FOR0(i,n)
	{
		FOR0(j,k)
		{
			if(ar[i][j]!=0)
				break;
		}
		if(j==k)
		{flag=1;break;}
	}
	if(flag==1)
	{cout<<"YES";return 0;}
    set< vi >s;
    FOR0(i,n)
	{
		vi temp;
		FOR0(j,k)
		{
			temp.push_back(ar[i][j]);
		}
		s.insert(temp);
	}
	set< vi >::iterator it,it2;
	it=s.begin();
	while(it!=s.end())
	{
		flag=0;
		it2=it;
		it2++;
		while(it2!=s.end())
		{
			FOR0(j,k)
			{
				if((*it)[j]==1&&(*it2)[j]==1)
					break;
			}
			if(j==k)
			{
				flag=1;break;
			}
			it2++;
		}
		if(flag==1)break;
		it++;
	}
	if(it!=s.end())
	{
		cout<<"YES";
	}
	else cout<<"NO";
}