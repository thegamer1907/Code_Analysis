#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 100000 + 10;
const int M = 1000000007;
const double PI = atan(1) * 4;
const int oo = 1000000000;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
#define pb push_back 
#define all(c) (c).begin(),(c).end()
string s,st[101];

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif
	cin>>s;
	int n;
	cin>>n;
	for(int i=0; i<n; ++i){
		cin>>st[i];
		if(st[i]==s)
			return cout<<"YES",0;
	}
	for(int i=0; i<n; ++i)
		for(int j=0; j<n; ++j){
			if(st[i][1]==s[0] && st[j][0]==s[1])
				return cout<<"YES",0;
		}
	cout<<"NO";

}