//429B.cpp

/*

*****************************   Author : Hrishikesh Vaidya  ***************************************

*/      
#include <stdio.h>
#include <vector>
#include <iostream>
#include <queue>
#include <set>
#include <algorithm>
#include <math.h>
#include <string>
#include <cstring>
#include <map>
#include <stack>
using namespace std;
//Input macros
#define si(n) scanf("%d",&n)
#define sc(n) scanf("%c",&n);
#define sl(n) scanf("%I64d",&n)
#define sf(n) scanf("%lf",&n)
#define ss(n) scanf("%s",n)
#define mem(a,b) memset(a,b,sizeof(a))
#define f(i,a,b) for(ll i=a;i<=b;i++)
#define frev(i,a,b) for(ll i=a;i>=b;i--)
#define maX(a,b) ((a)>(b)?a:b)
#define miN(a,b) ((a)<(b)?a:b)
#define ll long long
#define ld long
#define llu unsigned long long
#define pb push_back
#define gc getchar_unlocked
#define fs first
#define sn second
#define ls (node<<1)
#define rs (node<<1)|1
/* a=target variable, b=bit number to act upon 0-n */
#define BIT_SET(a,b) ((a) |= (1<<(b)))
#define BIT_CLEAR(a,b) ((a) &= ~(1<<(b)))
#define BIT_FLIP(a,b) ((a) ^= (1<<(b)))
#define BIT_CHECK(a,b) ((a) & (1<<(b)))

/* x=target variable, y=mask */
#define BITMASK_SET(x,y) ((x) |= (y))
#define BITMASK_CLEAR(x,y) ((x) &= (~(y)))
#define BITMASK_FLIP(x,y) ((x) ^= (y))
#define BITMASK_CHECK(x,y) ((x) & (y))
#define maxn 100005
ll arr[maxn];
int n;

void solve(){
	si(n);
	for(int i=0;i<n;i++) sl(arr[i]);
	int ansval=1e9, ans;
	ll val[maxn];
	for(int i=0;i<n;i++){
		ll t=arr[i]%n;
		val[i] = arr[i]/n;
		if(t>i) val[i]++;
		if(val[i]<ansval) {
			ans=i+1;
			ansval = val[i];
		}
	}
	cout<<ans<<endl;
	
}
int main(){

	solve();
	return 0;
}