
#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define	endl		'\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define hell        1000000007
#define rep(i,a,b)	for(ll int i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
using namespace std;
#define N  100005

int n,k=0;
int *p,*a;
int sol(int x,int y){
	if(x==y) return k+(a[x]==0?1:-1);
	else if(x==0) return k+p[y];
	else return k+(p[y]-p[x-1]);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int TESTS=1;
//	cin>>TESTS;
	while(TESTS--)
	{
		int i,j;
		cin>>n;
		a = new int[n];
		p = new int[n];
		cin>>a[0];
		if(a[0]==0) p[0]=1;
		else {p[0]=0; k++;}
		for(int i=1;i<n;i++){
			p[i]=0;
			cin>>a[i];
			if(a[i]==1) k++;
			p[i]=p[i-1]+(a[i]==0?1:-1);
		}
		int ans=sol(0,0);
		for(i=0;i<n;i++){
			for(j=i;j<n;j++){
				ans=max(ans,sol(i,j));
			}
		}
		cout<<ans;
	}
	return 0;
}