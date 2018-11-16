#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define f first
#define s second
#define pb push_back

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie();

	int n,t;
	int a[100100];
	cin>>n>>t;
	int cur = 1;
	for (int i = 1; i <=n; ++i)
	{
		cin>>a[i];
	}
	while(cur <=t) {
		if(cur==t){
			puts("YES");
			return 0;
		}
		else{
			cur = cur+a[cur];
		}
	}
	puts("NO");
	return 0;
}
