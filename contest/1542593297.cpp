#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define tr(v,it) for(auto it=v.begin(); it!=v.end(); it++)
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define F first
#define S second
#define endl "\n"
#define MOD 1000000007
#define pie 3.141592653589793
#define INF 1e18
using namespace std;

int main()
{
        //freopen("input.txt","r",stdin);
        //      freopen("output.txt","w",stdout);

        ios::sync_with_stdio(0); cin.tie(0);

        string s;
        cin>>s;
        int n;
        cin>>n;
        vector<string>v(n);
        for(int i=0; i<n; i++) {
                cin>>v[i];
        }
        bool ok=false;
        for(int i=0; i<n; i++) {
                for(int j=0; j<n; j++) {
                        string t=v[i]+v[j];
                        for(int k=0; k<3; k++) {
                                string g="";
                                g.pb(t[k]);
                                g.pb(t[k+1]);
                                if(g==s)
                                        ok=true;
                        }
                }
        }

        if(ok)
                cout<<"YES";
        else
                cout<<"NO";

        return 0;
}
