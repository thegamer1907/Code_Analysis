#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef unsigned long long int ulli;
typedef long double ld;
#define pb push_back
#define mp make_pair
#define milito ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define gol(i,a,b) for(lli i=a;i<b;i++)
const long double EPS=1e-12;
const long long int mod=1e9 + 7;
bool comp(pair<lli ,pair<lli,lli>> n1,pair<lli ,pair<lli,lli>> n2)
{
	return n1.first>n2.first;
}
int main()
{
	lli n,t;
	cin>>n>>t;
	lli a[n];
	gol(i,1,n)cin>>a[i];
	lli cur=1;
	while(cur<=t)
	{
		if(cur==t)return cout<<"YES",0;
		cur+=a[cur]; 
	}
cout<<"NO";
}
