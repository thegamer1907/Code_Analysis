#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define loop(i,a,b) for(ll i=a;i<b;i++)
#define test() ull t;cin>>t;while(t--)
#define pb push_back
#define mkp make_pair
#define nl cout<<endl
#define MOD 1000000007
#define trace(s,a) cout<<s<<a,nl;


int main() 
{
	fastio();
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n,t,cnt=0;
	cin>>n>>t;
	string st;
	cin>>st;
	
	while(cnt<t)
	{
		for(int i=0;i<st.length()-1;i++)
		{
			if(st[i]=='B'&&st[i+1]=='G')
			{
				st[i]='G';
				st[i+1]='B';
				i++;
			}
		}
		cnt++;
	}
	cout<<st;
	return 0;
}