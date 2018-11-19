#include<bits/stdc++.h>
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define all(a) a.begin(),a.end()
#define sqr(a) ((a)*(a))
#define y1 y1231231
#define endl '\n'
#define ll long long
#define int ll

using namespace std;

const int N=300001;
const int inf=1e9+3;
const int md=1e9+7;
const long double eps=0.0000000000001;

int n,k,kl[N],sm[N],z;
vector<int> a[N];
bool bg[(1<<4)];

bool cmp(vector<int> a,vector<int> b)
{
    return a.size()>b.size();
}

main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>n>>k;
    int x;
    for(int i=1;i<=n;++i)
    {
        z=0;
        for(int j=1;j<=k;++j)
        {
            cin>>x;
            if(x==0)
            {
                kl[j]++;
                a[i].pb(j);
            }
            z+=(1<<(j-1))*x;
        }
        bg[z]=true;
    }
    for(int i=1;i<=k;++i)
    {
        if(kl[i]==0)
        {
            cout<<"NO";
            return 0;
        }
    }
    sort(a+1,a+n+1,cmp);
    for(int j=1;j<=n;++j)
    {
        sm[a[j].size()]++;
    }
    if(sm[k]>0)
    {
        cout<<"YES";
        return 0;
    }
    if(k==4)
    {
        if(sm[3]>0)
        {
            cout<<"YES";
            return 0;
        }else if(sm[2]>0)
        {
            int b=0;
            for(int j=0;j<(1<<4);++j)
            {
                if(bg[j])
                {
                    b=(1<<4);
                    b--;
                    b=j^b;
                    if(bg[b])
                    {
                        cout<<"YES";
                        return 0;
                    }
                }
            }
            cout<<"NO";
            return 0;
        }else
        {
            cout<<"NO";
            return 0;
        }
    }else if(k==3)
    {
        if(sm[2]>0)
        {
            cout<<"YES";
            return 0;
        }else
        {
            cout<<"NO";
            return 0;
        }
    }else if(k==2)
    {
        if(sm[1]>0)
        {
            cout<<"YES";
            return 0;
        }else
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"NO";
}
