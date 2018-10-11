#include <bits/stdc++.h>
using namespace std;
#define nmx (long long) 100000
bool tmp[nmx];
typedef long long ll;
set<string>st;
int main()
{
	ios_base::sync_with_stdio(false);
	int n,m; cin>>n>>m;
	for(int i=0;i<n+m;i++)
    { string x; cin>>x; st.insert(x); }
    int cnt = m+n-st.size();
    if(cnt%2==0)
        {if(n>m) cout<<"YES";
        else cout<<"NO";}
    else if(cnt%2==1)
    {if(n+1>m) cout<<"YES";
        else cout<<"NO";}
}

