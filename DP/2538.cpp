#include <bits/stdc++.h>
#define  pb push_back
#define nl "\n"
#define fastScan ios_base::sync_with_stdio(0); cin.tie(NULL);
using namespace std;
int s[123456];
int main()
{
	fastScan;
	int n,cnt=1,maxcnt=1;cin>>n;
	for(int i=0;i<n;i++)
		cin>>s[i];
	for(int i=1;i<n;i++)
	{
		if(s[i]>s[i-1])
			cnt++;
		else
		{
			maxcnt=max(cnt,maxcnt);
			cnt=1;
		}
	}
	maxcnt=max(cnt,maxcnt);
	cout<<maxcnt<<nl;
}
