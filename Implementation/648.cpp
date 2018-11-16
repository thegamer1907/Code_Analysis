/*
 *
 ********************************************************************************************
 * AUTHOR : Babin Dutta                                                                     *
 * Language: C++14                                                                          *                                      *
 ********************************************************************************************
 *
 */
 
 
 
 
 
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define mod 1000000007
#define setto(n) cout << fixed << setprecision(n)
#define pb push_back
#define lb std::lower_bound
#define tstll(t) ll t; cin>>t; while(t--)
#define lfor(i,n) for(i=0;i<n;i++)
#define ft first
#define se second
typedef pair<int,int> p;


int main() {
	#ifdef JUDGE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    #endif
	boost;
	ll n,i,m,r,c=0;
	cin>>n>>m;
	vector<ll> v;
	lfor(i,n){
		cin>>r;
		v.pb(r);
	}
	lfor(i,n){
		if(v[i]>=v[m-1] && v[i]>0) c++;
		else break;
	}
	cout<<c<<endl;
	return 0;
} 
