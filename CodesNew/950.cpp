#include <bits/stdc++.h>
using namespace std;
#define ll long long

set<string> P,B,C;

int main()
{
	if (fopen("input.txt","r")) {
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	}
 
	ll n,m;
	cin>>n>>m;

	ll i;
	string s;
	for (i=0;i<n;i++) {
		cin>>s;
		P.insert(s);
	}

	for (i=0;i<m;i++) {
		cin>>s;
		if (P.find(s)!=P.end()) {
			C.insert(s);
			P.erase(s);
		}
		else {
			B.insert(s);
		}
	}

	if (C.size()%2==0) {  //turn is P
		if (P.size()>B.size())
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	else {  //turn is B
		if (B.size()>P.size())
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}

	return 0;
} 