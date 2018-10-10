/*
	Copyright: razouq (c)
	Author: Anass BENDARSI
	Date: 02/10/2018 20:16:24
	flamers will **** you
*/
//#include<flamers.h>

#include "bits/stdc++.h"
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#define ll long long

using namespace std;

int main(){
//	freopen("input.in", "r", stdin);
//	freopen("output.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie();
	int n;
	ll l;
	cin>>n>>l;
	double arr[n];
	for(int i = 0; i < n; i++) {
		cin>>arr[i];
	}
	vector<double> v;
	sort(arr, arr+n);
	for(int i = 1; i < n; i++) {
		v.push_back((arr[i] - arr[i-1]) / 2);
	}
	v.push_back(arr[0]);
	v.push_back(l-arr[n-1]);
	sort(v.begin(), v.end());
	printf("%.9f\n", v[v.size() - 1]);
	return 0;
}
