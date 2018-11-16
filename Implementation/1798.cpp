// Author Nikhil Rajawat

#include<cstdio>
#include<iostream>
#include<limits.h>
#include<stdio.h>
#include<sstream>
#include<stdlib.h>
#include<algorithm>
#include<cmath>
#include<vector>
#include<map>
#include<cstring>
#include<set>
#include<list>
#include<stack>
#include<queue>
#include<iomanip>
#include<ctype.h>
#include<complex>
#include<utility>
#include<functional>
#include<bitset>
#include<numeric>
#include<cassert>
#include<limits>
using namespace std;
#define ll long long int
#define gc getchar_unlocked
#define INF 999999999999
#define MAX 1000005
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define  clr(a,b) memset(a,b,sizeof(a));
#define ios ios_base::sync_with_stdio(0);
ll a[MAX];
int main() {
	ios;
	string s;
	cin>>s;
	ll c = 1, flag = 0;
	for(ll i=1 ; i < s.size() ; i++) {
		if(s[i] == s[i-1]) {
			c++;
			if(c >= 7) flag = 1;
		} else c = 1;
	}
	if(flag) cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}