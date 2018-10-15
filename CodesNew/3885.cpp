#include <bits/stdc++.h>
#include <algorithm>
//#include <cstdio>
//#include <functional>
#include <iostream>
//#include <cfloat>
//#include <climits>
//#include <cstdlib>
//#include <cstring>
//#include <cmath>
//#include <map>
//#include <queue>
//#include <set>
//#include <sstream>
//#include <stack>
#include <string>
//#include <time.h>
#include <vector>
//#include <random>
//#include <unordered_set>
//#include <complex>
#include <string.h>
#define rt0 return 0
#define rep(i,n) for(int i=0;i<n;i++)
#define LL long long
#define pii pair<int,int>
#define pb push_back
using namespace std;
const LL MOD=1e9+7;
LL n,a[100010];
int main()
{
	LL n,mx=0,sum=0;
	cin>>n;
	rep(i,n) 
	{
		cin>>a[i];
		if(a[i]>mx) mx=a[i];
		sum+=a[i];
	}
	LL s=(sum+n-2)/(n-1);
	if(mx>s) s=mx;
	cout<<s<<"\n";
    rt0;
}