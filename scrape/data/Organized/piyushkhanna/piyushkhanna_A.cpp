#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define PSET(x,y) fixed<<setprecision(y)<<x
#define pb push_back
#define pf push_front
#define mp make_pair
#define pii pair<int,int>
#define pli pair<int,int>
#define pint pair<int,int>
#define pid pair<int,double>
#define vi vector<int>
#define ff first
#define ss second
#define ll long long
#define ull unsigned long long
#define SIZE 200010
#define MOD 1000000007
#define BIG 999999937


int main()
{
	
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif
    
    ll n,m,k;
    cin>>n>>m>>k;
    
    ll sp[m];
    ll pg[m];
    
    for(int i=0;i<m;i++)
    {
    	cin>>sp[i];
    	pg[i]=sp[i]/k;
	}
	
	int st=0;
	int shift=0;
	
	ll ans=0;
	
	for(int i=0;i<m;)
	{
		int pg_no=(sp[i]-shift-1)/k;
		int vacant=0;
		
		bool check=false;
		
		while((sp[i]-shift-1)/k==pg_no && i<m)
		{
			vacant++;
			i++;
			check=true;
		}
		
		shift+=vacant;
		ans++;
		
		if(!check)
		{
			i++;
		}
		
	}
	
	cout<<ans<<endl;
	
	return 0;
}