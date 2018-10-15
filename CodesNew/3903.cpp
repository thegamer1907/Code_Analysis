#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
//#define ll long long 
#define maxn 100007
using namespace std;

int n;
int a[maxn];
long long ans;
long long sum;
vector<int> x;

int main(){
	ios::sync_with_stdio(0);
	//freopen("werewolf.in","r",stdin);
	//freopen("werewolf.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	sort(a+1,a+1+n);
/*	ll ansn=a[n];
	int k=n-1;
	ans+=ansn;
	int cnt=0;
	for(int i=n-1;i>=1;i--)
	{
		if(k>0)
		{
			x.push_back(ansn-a[i]);
			cnt++;
		}
		else
		{
			while(cnt>0 && a[i]>0)
			{
				
			}
		}
	}*/
	ans=(long long)(sum)/(long long)(n-1);
	if(sum%(n-1)!=0) ans++;
//	cout<<sum<<" "<<n-1<<endl;
//	cout<<ceil(8/3)<<endl;
	if(ans>a[n]) cout<<ans;
	else cout<<a[n];
	return 0;
}