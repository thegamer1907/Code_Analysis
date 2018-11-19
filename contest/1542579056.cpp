#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vector<vi> v;
int main()
{
	ios::sync_with_stdio(false);
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		vi tmpv;
		for(int j=1;j<=k;j++)
		{
			int t;
			cin>>t;
			tmpv.push_back(t);
		}
		bool flag=true;
		for(int j=0;j<v.size();j++) if (tmpv==v[j]) flag=false;
		if (flag) v.push_back(tmpv);
	}
	bool ans=false;
	for(int i=0;i<v.size();i++)
	{
		bool f=true;
		for(int l=0;l<k;l++)
			if (v[i][l]*2>=1) f=false;
		if (f) ans=true;
	}

	for(int i=0;i<v.size();i++)
		for(int j=i+1;j<v.size();j++)
		{
			int t[5];
			bool f=true;
			for(int l=0;l<k;l++)
			{
				t[l]=v[i][l]+v[j][l];
				if (t[l]*2>2) f=false;
			}
			if (f) ans=true;
		}
	if (ans) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}