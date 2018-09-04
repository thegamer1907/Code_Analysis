#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define speed std::ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//#define int long long

using namespace std;
vector<int> v;
int main()
{
    speed
    ///freopen("input.txt","r",stdin);
    int n,a;
    cin>>n;
    int st=1;
    v.pb(1);
    for(int i=0; i<n; i++)
    {
        cin>>a;
        st=st+a;
        if(i<n-1)
            v.pb(st);
        //cout<<st<<endl;
    }
    int m,x;
    cin>>m;
    int l=v.size();
    for(int i=0; i<m; i++)
    {
        cin>>x;
        int ix=lower_bound(v.begin(),v.end(),x)-v.begin();
        //cout<<v.size();
        if(ix==v.size())
        {
            cout<<ix<<endl;
        }
        else
        {
            if(v[ix]==x)
            {
                cout<<ix+1<<endl;
            }
            else
                cout<<ix<<endl;
        }
    }
    return 0;
}
