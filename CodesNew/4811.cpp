//============================================================================
// Name        : ALI.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, ANSI-style
//============================================================================

#include <bits/stdc++.h>
using namespace std;
int a[500000];
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	//	freopen("input.txt", "r", stdin);
	//	freopen("output.txt", "w", stdout);
	vector<int> f , s;
	int n , counter = 0;
	cin>>n;
	for(int i=0 ; i<n ; cin>>a[i] , i++);
	sort(a , a+n);

	for(int i=0 ; i<=n/2 - 1 ; i++) f.push_back(a[i]);
	for(int i=n/2 ; i<n ; i++) s.push_back(a[i]);

//	for(int i=0 ; i<(int)s.size() ; i++) cout<<s[i]<<' ';
//	cout<<endl;
//	for(int i=0 ; i<(int)f.size() ; i++) cout<<f[i]<<' ';
//	cout<<endl;

	for(int i=(int)s.size() - 1 , j=(int)f.size() - 1 ; i>=0  and j>=0 ;){
		//cout<<i<<' '<<j;
		if((f[j] * 2) <= s[i]){
			//cout<<s[i]<<' '<<f[j]<<endl;
			counter++ , i-- , j--;
		}
		else j--;
	}
		cout<<n - counter;
}
