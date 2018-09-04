#include <bits/stdc++.h>
#define ll long long
#define pll pair<ll,ll>
#define pil pair<int,ll>
#define pli pair<ll,int>
#define pii pair<int,int>
#define ull unsigned long long
#define mk make_pair
#define pb push_back
#define eps 1e-12
#define MAXN 200009
using namespace std;
inline vector<int> z_func(string s)
{
	int sz=s.size();
	vector<int> z(sz,0);
	int l=0,r=0;
	for(int i=1;i<sz;i++)
	{
		if(i<=r)
		{
			z[i]=min(z[i-l],r-i+1);
		}
		while((i+z[i]<sz)&&s[z[i]]==s[i+z[i]])
		{
			++z[i];
		}
		if(i+z[i]-1>r)
		{
			l=i;
			r=i+z[i]-1;
		}
	}
	return z;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s;
	cin>>s;
	int sz=s.size();
	vector<int> z=z_func(s);
	int ans=0,fans=0;
	vector<int> v;
	for(int i=1;i<sz;i++)
	{
		if(i+z[i]==sz)
		{
			v.pb(z[i]);
		}
		else
		{
			fans=max(fans,z[i]);
		}
	}
	sort(v.begin(),v.end());
	if(v.empty())
	{
		cout<<"Just a legend"<<endl;
		return 0;
	}
	else
	{
		if(fans>=v.back())
		{
			cout<<s.substr(0,v.back())<<endl;
		}
		else
		{
			if(v.size()==1)
			{
				cout<<"Just a legend"<<endl;
			}
			else
			{
				v.pop_back();
				cout<<s.substr(0,v.back())<<endl;
			}
		}
	}
	return 0;
}