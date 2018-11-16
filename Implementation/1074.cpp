#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define sp setprecision
int main(){
	ll n,t;
	cin>>n>>t;
	char s[n];
	cin>>s;
	ll j=0;
	while(t--){
		for(ll i=0;i<n-1;i++){
			if(s[i]=='B'&& s[i+1]=='G' ){
				s[i]='G';
				s[i+1]='B';
				i++;
			}
		}
		j++;
	}
	cout<<s;
}
