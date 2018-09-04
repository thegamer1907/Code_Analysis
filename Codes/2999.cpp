#include <bits/stdc++.h>
#define ll long long

const ll p = 31;

using namespace std;

ll Pow[1000001];
vector<ll> h;
string s;
vector< ll > prefix;

void fill(void){
	Pow[0] = 1;
	for(int i=1;i<=1000000;i++)
		Pow[i] = Pow[i-1]*p;
}

void Hash(string s, vector<ll>& h){
	h.resize(s.size());
	h[0] = s[0];
	for(int i=1;i<s.size();i++)
		h[i] = h[i-1] + s[i]*Pow[i];
}

bool check(int x){
	x = prefix[x];
	for(int i=x+1;i<s.size()-1;i++)
		if(h[x]*Pow[i-x]==h[i]-h[i-x-1])
			return true;
	return false;
}

int main(){
	cin >> s;
	fill();
	Hash(s,h);
	int n = s.size()-1;
	for(int i=0;i<n;i++)
		if(h[i]*Pow[n-i]==h[n]-h[n-i-1])
			prefix.push_back(i);
	
	sort(prefix.begin(),prefix.end());
	
	bool ind = false;
	int l = 0, r = prefix.size()-1;

	if(prefix.size()==0){
		cout << "Just a legend";
		return 0;
	}
	while(l!=r){
		int m = (l+r+1)/2;
		if(check(m))
			l=m;
		else
			r=m-1;
	}
	
	if(check(l))
		for(int i=0;i<=prefix[l];i++)
			cout << s[i];
	else
		cout << "Just a legend";
return 0;
}