#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define ld long double
#define F first
#define S second

using namespace :: std;

const ll maxn=1e5+500;

int main(){
	char a1,a2;
	cin>>a1>>a2;

	ll n;
	cin>>n;
	string s;
	bool u1=0,u2=0;
	for(ll i=0;i<n;i++){
		char b1,b2;
		cin>>b1>>b2;
		if(b1==a1 && b2==a2){
			cout<<"YES";
			return 0;
		}
		if(b1==a2){
			u1=1;
		}
		if(b2==a1){
			u2=1;
		}
	}
	if(u1&u2){
		cout<<"YES";
		return 0;
	}
	cout<<"NO";
/*
	s+=s;
	for(ll i=0;i<s.size()-1;i++){
		if(s[i]==a1 && s[i+1]==a2){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;*/
}

