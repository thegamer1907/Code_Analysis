#include<bits/stdc++.h>
using namespace std;
#define ll int
#define fr first
#define sc second
#define MAX ((ll)(1e18+100))
#define MOD ((ll)(1e9+7))
#define HS1 ((ll)(137))
#define HS2 ((ll)(1e9+9))
#define ARRS ((ll)(1e5+900))
#define pb push_back

ll n;
string s,t;

ll k=0;

int main(){
	cin>>s;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>t;
		if(s==t){
			cout<<"YES";
			return 0;
		}
		if(s[0]==t[1])k|=1;
		if(s[1]==t[0])k|=2;
	}
	if(k==3)cout<<"YES";
	else cout<<"NO";
	return 0;
}
