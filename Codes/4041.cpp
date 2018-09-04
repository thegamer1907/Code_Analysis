#include<bits/stdc++.h>
#define Rozi(x) x&(-x)
#define LL long long
#define mp make_pair
#define pb push_back
#define pf push_front
#define pof pop_front
#define pob pop_back
#define fi first
#define se second
using namespace std;
int n,m,q;
vector<int>v[100002];
vector<int>mini[100002];
int minu[100002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m;
    for(int i=1;i<=n;++i)
    {
        minu[i]=1e9;
        for(int j=1;j<=m;++j)
        {
            int nr;
            cin>>nr;
            v[i].push_back(nr);
            if(i==1)
                mini[i].push_back(1);
            else
                if(v[i][j-1]>=v[i-1][j-1])
                    mini[i].push_back(mini[i-1][j-1]);
                else
                    mini[i].push_back(i);
            minu[i]=min(minu[i],mini[i][j-1]);
        }
    }
    cin>>q;
    for(int i=1;i<=q;++i)
    {
        int l,r;
        cin>>l>>r;
        if(minu[r]<=l)
            cout<<"Yes"<<'\n';
        else
            cout<<"No"<<'\n';
    }
    return 0;
}
