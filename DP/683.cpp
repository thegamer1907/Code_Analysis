#include<bits/stdc++.h>
#define ll long long
using namespace std;

string s;
ll n,m,l,r,sig[200005];

int main(){
	cin >> s;
	ll n=s.length();
	for(int i=0;i<n;i++){
		int x=i+1;
		if(s[i]==s[i+1]) sig[x]++;
		sig[x]+=sig[i];
	}
	
	//for(int i=1;i<=n;i++) cout << sig[i];
	
	cin >> m;
	for(int i=1;i<=m;i++){
		cin >> l >> r;
		if(l==r-1){
			if(s[l-1]==s[r-1]) cout << 1;
			else cout << 0;
		}
		else cout << sig[r-1]-sig[l-1];
		cout << '\n';
	}
}
