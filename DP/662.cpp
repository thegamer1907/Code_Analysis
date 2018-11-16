#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,l,r,d[111111];
string s;
int main() {
	cin>>s;
	reverse(s.begin(),s.end());
	for(ll i=1;i<s.size();i++)
			d[i]=d[i-1]+(s[i]==s[i-1]);
	cout<<endl;
	cin>>n;
	for(ll i=1;i<=n;i++)
	{
		cin>>l>>r;
		l=s.size()-l;
		r=s.size()-r;
		cout<<d[l]-d[r]<<endl;
	}
}
