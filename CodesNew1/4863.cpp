#include<bits/stdc++.h>
using namespace std;
string a,b;
int d[200005];
bool check(int start) {
	string c=a;
	for(int i=0; i<=start; i++) {
		c[d[i]-1]='#';
	}
	int i=0,p=0,len=(int)c.size();
	while(i<len) {
		if(c[i]==b[p])p++;
		i++;
	}
	if(p>=(int)b.size())return true;
	return false;
}
int main () {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>a>>b;
	for(int i=0; i<(int)a.size(); i++) {
		cin>>d[i];
	}
	int l=0,r=(int)a.size()-1,ans=-1;
	while(l<=r) {
		int mid=(l+r)/2;
		if(check(mid)) {
			ans=mid;
			l=mid+1;
		} else r=mid-1;
	}
	cout<<ans+1<<endl;
	return 0;
}