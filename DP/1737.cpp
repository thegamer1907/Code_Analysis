#include<bits/stdc++.h>
#define ll long long int 
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin>>s;
	ll n=s.size(),i,x;
	vector<ll> vi1,vi2;
	for(i=0;i<n-1;i++){
		if(s[i]=='A'&&s[i+1]=='B'){
			vi1.pb(i);
		}
		if(s[i]=='B'&&s[i+1]=='A'){
			vi2.pb(i);
		}
	}
	sort(vi1.begin(),vi1.end());
	sort(vi2.begin(),vi2.end());
	if(vi1.size()>=1&&vi2.size()>=1){
		x=max(abs(vi2[vi2.size()-1]-vi1[0]),abs(vi1[vi1.size()-1]-vi2[0]));
		if(x>=2){
			cout<<"YES";
		}
		else{
			cout<<"NO";
		}
	}
	else{
		cout<<"NO";
	}
}