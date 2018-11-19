#include <bits/stdc++.h>

using namespace std;

map<string,int> co;
int n,k;

string get(int x)
{
	string ans="";
	while(x)
	{
		ans+=(x%2+'0');
		x/=2;
	}
	while(ans.size()<k) ans+='0';
	reverse(ans.begin(),ans.end());
	return ans;
}

int ok(string a,string b)
{
	int i;
	for(i=0;i<a.size();i++)
		if(a[i]=='1'&&b[i]=='1') return 0;
	return 1;
}

int main()
{
	cin >> n >> k;
	int i,j;
	for(i=0;i<n;i++)
	{
		string s;
		for(j=0;j<k;j++)
		{
			char x;
			cin >> x;
			s+=x;
		}
		if(s==string(k,'0')){cout << "YES" << endl; return 0;}
		co[s]++;
	}
	for(i=0;i<(1<<k);i++)
	{
		for(j=0;j<(1<<k);j++)
		{
			if(ok(get(i),get(j))&&((i!=j&&co[get(i)]>0&&co[get(j)]>0)||(i==j&&co[get(i)]>1)))
			{
				cout << "YES" <<  endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl;
}