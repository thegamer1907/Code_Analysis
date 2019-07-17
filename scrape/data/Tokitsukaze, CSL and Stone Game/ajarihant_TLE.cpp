#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int a[100005];
unordered_map<int,int> mp;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
 	{
		cin>>a[i];
		mp[a[i]]++;
 	}
 	if(mp[0]>=2)
 	{
 		cout<<"cslnb";
 		return 0;
 	}
 	int x=-1;
 	for(auto itr:mp)
 	{
 		if(itr.second>=3)
 		{
 			cout<<"cslnb";
 			return 0;
 		}
 		if(itr.second==2)
 		{
 			if(x==-1)
 			{
 				x=itr.first;
 				if(mp[x-1]>=1)
 				{
 					cout<<"cslnb";
 					return 0;
 				}
 			}
 			else
 			{
 				cout<<"cslnb";
 				return 0;
 			}
 		}
 	}
	sort(a,a+n);
	int flag=0;
	for(int i=0;i<n;i++)
	{
		int kitnadec = a[i]-i;
		if(kitnadec%2!=0) flag=1-flag;
	}
	if(flag==0) cout<<"cslnb";
	else cout<<"sjfnb";
	return 0;
}