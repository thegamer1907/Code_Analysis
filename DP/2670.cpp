#include <bits/stdc++.h>

using namespace std;

string a,b;

int get(string s)
{
	int ans=0;
	for(int i=0;i<s.size();i++) ans+=(s[i]=='+'?1:-1);
	return ans;
}

int main()
{
	cin >> a >> b;
	vector<int> q;
	for(int i=0;i<b.size();i++) if(b[i]=='?') q.push_back(i);
	int pos=get(a);
	int ans=0,tot=0;
	for(int i=0;i<(1<<(q.size()));i++)
	{
		tot++;
		for(int j=0;j<q.size();j++)
		{
			b[q[j]]=((i>>j)&1?'+':'-');
		}
		ans+=(get(b)==pos);
	}
	if(!q.size()){ans=get(a)==get(b); tot=1;}
	cout << fixed << setprecision(15) << 1.0*ans/tot << endl;
}