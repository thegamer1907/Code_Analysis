#include <bits/stdc++.h>
using namespace std;
#define fo(i,a,b,incr) for(int i=a;i<b;i+=incr)
#define rfo(i,a,b,decr) for(int i=a;i>b;i+=decr)
#define eb emplace_back
#define F first
#define S second
int n,m,cnt;
vector <string> foo,bar;
string s;
int main()
{
	cin>>n>>m;
	fo(i,0,n,1) cin>>s,foo.eb(s);
	fo(i,0,m,1) cin>>s,bar.eb(s);
	if (n==m){
		sort(foo.begin(),foo.end());
		sort(bar.begin(),bar.end());
		int i=0,j=0;
		while(i<n && j<m){
			if (foo[i]==bar[j]) cnt++,i++,j++;
			else if (foo[i]>bar[j]) j++;
			else i++;
			}
		if (cnt%2==0) cout<<"NO";
		else cout<<"YES";
		}
	else if (n>m) cout<<"YES";
	else cout<<"NO";
}
