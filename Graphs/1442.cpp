#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define	endl		'\n'
#define pll         pair<ll int,ll int>
#define vi          vector<int>
#define vll         vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define rep(i,a,b)	for(ll int i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
#define pii         pair<int,int>
using namespace std;

#define N  100005

int main()
{
	std::ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int TESTS=1;
	//cin>>TESTS;
	while(TESTS--)
	{
      ll int n,t,flag=0;
      cin >> n >> t;

      ll int a[n];
      rep(j,1,n)
      {
      	cin>>a[j];
      }
      ll int i=1;
      while(i<t)
      {
         i +=a[i];
         if(i==t) flag+=1;
         else if(i>t)break;
         else if(i<t)continue;
      }
      if(flag) cout<<"YES";
      else cout<<"NO";

	}
	return 0;
}