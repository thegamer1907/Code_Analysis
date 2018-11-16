#include<bits/stdc++.h>
#define fill(a,x) memset(a,x,sizeof(a));
typedef long long lli;
#define MOD 1000000007
#define SIZE 100005
#define loop(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define mp make_pair
#define MAX 1000001
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main()
{
	int q,l,r;
	string s;
	cin>>s>>q;
	int c[SIZE]={0};
	for(int i=0; i<s.length()-1; i++)
	{
		if(s[i]==s[i+1])
			c[i]=1;
		if(i)
			c[i]+=c[i-1];
	}
	c[s.length()-1] = c[s.length()-2];
	while(q--)
	{
		cin>>l>>r;
		if(r==1)
			cout<<"0\n";
		else if(l==1)
			cout<<c[r-2]<<endl;
		else
			cout<<c[r-2]-c[l-2]<<endl;
	}
	return 0;
}