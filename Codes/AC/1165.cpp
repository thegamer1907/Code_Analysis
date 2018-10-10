
#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define fs first
#define se second
#define ll long long
#define pb push_back
#define popb pop_back
#define pii pair<int, int>
#define fori(i,n) for(int i=0;i<n;i++)
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
//ios::sync_with_stdio(0), cin.tie(0);
//int dx[]={1,-1,0,0};
//int dy[]={0,0,1,-1};
//int dx[]={2,2,-2,-2,1,1,-1,-1};
//int dy[]={1,-1,1,-1,2,-2,2,-2};l
//unordered_map< int, int > m;

// bool bs(int lo, int hi,int key)
// {
// 	while(lo<=hi)
// 	{
// 		int mid = (lo+hi)/2;
// 		if(prime[mid] == key)return 1;
// 		if(prime[mid] < key) lo=mid+1;
// 		else hi = mid-1;
// 	}
// 	return 0;
// }
ll re=1e9+7;
//=======================================================================================================
int main()
{
	int t=0,i,n,m;
	cin>>n>>m;
	map<string,int> mep;
	string s;
	fori(i,n)cin>>s,mep[s]=1;;
	int c=0;
	fori(i,m)
	{
		cin>>s;
		if(mep.find(s)!= mep.end())c++;
	}
	if(c%2)m--;
	if(n>m)cout<<"YES";
	else cout<<"NO";
	return 0;
}