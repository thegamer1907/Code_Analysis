#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define INF 1e18
#define pi pair<ll,ll>
#define pb push_back
#define F first
#define S second
#define sc(x) scanf("%lld",&x)
char s[3];
char temp[3];
ll cnt[2][26];
int main(){
	scanf("%s",s);
	ll n;
	cin>>n;
	bool ans=false;
	for(int i=0;i<n;i++){
		scanf("%s",temp);
		if(temp[0]==s[0] && temp[1]==s[1]){
			ans=true;
		}
		cnt[0][temp[1]-'a']++;
		cnt[1][temp[0]-'a']++;
	}
	if(cnt[0][s[0]-'a'] && cnt[1][s[1]-'a']){
		ans=true;
	}
	if(ans){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}