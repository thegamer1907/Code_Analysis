#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
map<int,int> mp;
int main()
{
	ios::sync_with_stdio(0);
	int k,cnt=0; cin >> k;
	string s; cin >> s;
	ll ans=0; mp[0]=1;
	for(int i=0;i<s.size();i++)
	{
		if(s[i] == '1') cnt++;
		if(cnt>=k) ans+=mp[cnt-k];
		mp[cnt]++;
	}
	cout << ans << endl;
	return 0;
}

