#include<cstdio>
#include<iostream>
#include<map>
#include<set>
#include<stack>
#include<queue>
#include<algorithm>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include <iomanip>
#include <bits/stdc++.h>
#include <utility>

#define INF 2000000000
#define INF_LL 2000000000000000000ll
#define MOD_7 1000000007
#define MOD_9 1000000009
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long ll;
typedef unsigned long long  ull;

int gcd(int x,int y){
	if(y==0){
		return x;
	}
	return gcd(y,x%y);
}

ll lgcd(ll x, ll y){
	if(y==0){
		return x;
	}
	return lgcd(y,x%y);
}

ll pow(ll a, ll b ,ll m = MOD_7){
	ll res=1;
	while(b>0){
		if(b&1){
			res=(res*a)%m;
		}
		a=(a*a)%m;
		b>>=1;
	}
	return res;
}

ll gcdExtended(ll a, ll b, ll *x, ll *y)
{
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }

    ll x1, y1;
    ll gcd = gcdExtended(b%a, a, &x1, &y1);

    *x = y1 - (b/a) * x1;
    *y = x1;

    return gcd;
}

ll modInverse(ll a, ll m=MOD_7)
{
    ll x, y;
    ll g = gcdExtended(a, m, &x, &y);
    ll res = (x%m + m) % m;
    return res;
}

int arr[100010];

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n,i,t,sum=0;
	cin>>n>>t;
	
	for(i=0;i<n;i++){
	    cin>>arr[i];
	}
	
	int ans=0;
	int st=0,end=0;
	while(end<n){
	    sum+=arr[end];
	    while(sum>t&&st<=end){
	        sum-=arr[st];
	        st++;
	    }
	    
	    ans=max(ans,end-st+1);
	    end++;
	}
	
	cout<<ans;
	return 0;
}