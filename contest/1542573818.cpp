#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	string p;
	cin>>p;
	int n;
	cin>>n;
	string a[n],ans="";
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) for(int j=0;j<n;j++) ans+=(a[i] + a[j]);
	if(ans.find(p)!=string::npos) cout<<"YES";
	else cout<<"NO";
	return 0;
}
