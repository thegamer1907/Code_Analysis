//####################################
//###  Himanshu Shukla @coldbeer  ####
//###  CSE NIT CALICUT            ####
//####################################

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define f(a, b) for (auto i = a; i < b; i++)
#define mp(a, b) make_pair(a, b)
#define p pair<int,int>
#define all(v) v.begin(),v.end()
#define INF 0x3f3f3f3f
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

int pre_process[100002];

int main()
{
	string s;
	cin>>s;
	f(0,s.length()-1)
	{
		if (s[i] == s[i+1]) pre_process[i+1] = 1 + pre_process[i];
		else pre_process[i+1] = pre_process[i];
	}
	pre_process[s.length()] = pre_process[s.length()-1];
	int m;
	scanf("%d",&m);
	while (m--)
	{
		int l,r;
		scanf("%d %d",&l,&r);
		int ans = pre_process[r-1] - pre_process[l-1];
		printf("%d\n",ans);
	}
}