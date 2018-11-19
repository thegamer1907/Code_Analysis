#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define ll long long
string a[1000007];
int main()
{
	string aa;
	cin>>aa;
	int m;
	cin>>m;
	for(int i=0;i<m;i++)
		cin>>a[i];
	int ans=0;
	for(int i=0;i<m;i++)
		for(int j=0;j<m;j++)
			if(j!=i)
				if(a[i]==aa||a[j]==aa||a[i][1]==aa[0]&&a[j][0]==aa[1]||a[j][1]==aa[0]&&a[i][0]==aa[1]||a[i][1]==aa[0]&&a[i][0]==aa[1]||a[j][1]==aa[0]&&a[j][0]==aa[1])
					ans=1;
	for(int i=0;i<m;i++)
	{
		string bb=aa;
		reverse(bb.begin(),bb.end());
		if(a[i]==aa||a[i]==bb)
			ans=1;
	}
	if(ans)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}