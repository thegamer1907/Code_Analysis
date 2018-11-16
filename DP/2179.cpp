#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxn=1e6+7;
const int inf=INT_MAX;
const ll inff=1e18;
const int mod=1e9+7;
#define pb push_back
#define pii pair<int,int>
#define all(v) (v).begin(),(v).end()
#define F first
#define S second
#define sz(v) ((int)(v).size())
#define mp make_pair
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//#define endl '\n'
//#define int ll

int a[maxn],ans[maxn];
set<int>s;

int32_t main()
{
 	IOS
 	int n,m;
 	cin>>n>>m;
 	for (int i=1;i<=n;i++) cin>>a[i];
 	for (int i=n;i>=1;i--)
    {
        s.insert(a[i]);
        ans[i]=s.size();
    }
 	while (m--)
    {
        int x;
        cin>>x;
        cout<<ans[x]<<endl;
    }
}
