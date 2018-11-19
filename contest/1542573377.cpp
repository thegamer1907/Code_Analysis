#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <math.h>
#include <string>
#include <cstring>
#include <set>
#include <map>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <windows.h>
#include <algorithm>
	
#define fr for (i=1;i<=n;i++)
#define frd for (j=1;j<=n;j++)
#define ex exit(0)
#define pb push_back
#define ppb pop_back
#define ss string
#define ll long long 
	
const int N=100500;
	
using namespace std;
	
ll i, j, n;
ll ans[N], ar, op, kz;
ll c, d, e, r, l, x; 
ss s,a[N];
bool ok=0;
int main () {
	cin >>s;
	cin >>n;
	for(i=0;i<n;i++){
		cin >>a[i];
	}
	for(i=0;i<n;i++){
		if(a[i] == s) 
		ok = 1;
		for(j=0;j<n;j++){
			if(a[i][1] == s[0] && a[j][0] == s[1])
			ok = 1;
		}
	}
	if(ok) 
	cout << "YES";
	else 
	cout << "NO";

return 0;
}