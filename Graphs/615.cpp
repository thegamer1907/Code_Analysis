#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test() ull t;cin>>t;while(t--)
#define pb push_back
#define mkp make_pair
#define nl cout<<endl
#define MOD 1000000007
#define loop(i,start,end) for(ull i=start;i<end;i++)
#define N 100001
#define oa(a,n) for(int i=0;i<n;i++)cout<<a[i]<<" ";nl
#define ov(a) for(int i=0;i<a.size();i++)cout<<a[i]<<" ";nl
int main()
{
	fastio();
  #ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
  #endif
	int n,t;cin>>n>>t;
	string s,s1;
	cin>>s;
	s1 = s;
	loop(i,0,t)
	{
		loop(j,0,n)
		{
			if(s[j]=='B' && s[j+1]=='G')
			{
				s1[j+1] = 'B';
				s1[j] = 'G';
			}	
		}
		s = s1;
	}
	cout<<s1<<endl;
	
	return 0;
}