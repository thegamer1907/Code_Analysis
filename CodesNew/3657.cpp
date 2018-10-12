#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define rep(i,a,b) for (int i = a; i < b; ++i)
#define mod 1000000007
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(c) c.begin(), c.end()
#define tr(container, it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)

signed main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
    	int x; cin>>x;
    	v.push_back(x);
    }
    int x=m;
    vector<int> u(all(v));
    while(m--){
    	sort(all(u));
    	u[0]+=1;
    }
 
    cout<<*max_element(all(u))<<" "<< *max_element(all(v)) + x<<endl;

	return 0;
}
