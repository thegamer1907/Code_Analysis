#include<iostream>
#include<algorithm>
#include<set>
#include<vector>
#include<queue>
#include<cmath>
#include<cstring>
#include<sstream>
#include<cstdio>
#include<ctime>
#include<map>
#include<stack>
#include<string>
using namespace std;

#define eps 1e-8
#define inf 0x3f3f3f3f
#define INF 0x7f7f7f7f
#define PI acos(-1.0)
#define mem(a,x) memset(a,x,sizeof(a))
#define zero(x) (((x)>0?(x):-(x))<eps)
#define lowbit(x) (x&-x)
#define MID int mid=(l+r)/2
#define lson rt<<1
#define rson rt<<1|1
#define fl() cout<<"flag!!"<<endl
#define ull unsigned long long
#define ll long long
#define sfi(x) scanf("%d",&x)

const int maxn = 20+9;
const int mod = 1e9+7;
int a[109];
int main()
{
	int n,mm;
	while(cin>>n>>mm)
	{
		int Max=-1;
		int m=mm;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			Max=max(Max,a[i]);
		}
		sort(a,a+n);
		for(int i=0;i<n-1;i++) m-=(a[n-1]-a[i]);
		if(m<0) cout<<a[n-1];
		else cout<<a[n-1]+m/n+(bool)(m%n);
		cout<<" "<<Max+mm<<endl;
	}
    return 0;
}