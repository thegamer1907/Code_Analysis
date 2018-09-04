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
const int Max_val = 100001;
//=======================================================================================================
ll n,k,y,x,ans;
map<ll,ll> cntr,cntl;
int main()
{
	cin>>n>>k;
	int a[n];
	fori(i,n)scanf("%d",&a[i]),cntr[a[i]]++;
	cntr[a[0]]--;cntl[a[0]]++;
	for(int i=1;i<n-1;i++)
	{
		cntr[a[i]]--;
		if(a[i]%k == 0)
		{
			ans+=cntl[a[i]/k]*cntr[a[i]*k];
		}
		cntl[a[i]]++;
	}
	cout<<ans;
	return 0;
}
