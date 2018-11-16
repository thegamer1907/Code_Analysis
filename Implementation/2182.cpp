#include<iostream>
#include<bits/stdc++.h>
#include<vector>

#define ll long long
#define pb push_back
#define inf (int)1e9
#define f(n) for(ll i=0; i<n; i++)

using namespace std;



int main() {

	//Using text files for input output
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif

	//FastIO
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	//start your code here
	ll n;
	cin>>n;
	ll force[4] = {0};
	f(n)
	{
		ll x,y,z;
		cin>>x>>y>>z;
		force[1] += x;
		force[2] += y;
		force[3] += z;
	}

	if(force[1] == 0 && force[2] == 0 && force[3] == 0)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	
	
	return 0;
}