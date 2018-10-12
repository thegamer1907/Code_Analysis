#include <bits/stdc++.h>

#include <algorithm>
#define sz(a) (int)a.size()
#define ln(a) (int)a.length()
#define ll long long

using namespace std;


int main(){
	ios::sync_with_stdio(0);
	int n; cin>>n; 
	pair<string, int> s[n];
	for(int i=0; i<n; i++) cin>>s[i].first;
	s[n-1].second=ln(s[n-1].first);
	for(int i=n-2; i>=0; i--){
		int a, b; 
		a=b=1;
		s[i].second=-1;
		while(a<ln(s[i].first) && b<s[i+1].second){
			if (s[i].first[a]<s[i+1].first[b]) break;
			else if (s[i].first[a]>s[i+1].first[b]){
				s[i].second=a;
				break;
			}
			a++, b++;
		}
		if (s[i].second!=-1) continue;
		if (a<ln(s[i].first) && b<s[i+1].second)	s[i].second=ln(s[i].first);
		else if (b==s[i+1].second && a<ln(s[i].first)) s[i].second=b;
		else s[i].second=ln(s[i].first);

	}
	for(int i=0; i<n; i++) cout<<s[i].first.substr(0, s[i].second)<<'\n';
}
