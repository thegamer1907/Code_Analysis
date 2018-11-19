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

int h,m,s,t1,t2,sm,x;

int nxt[61],pr[61];
bool used[61];

main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin>>h>>m>>s>>t1>>t2;
    for(int i=0;i<=59;++i)
    {
        nxt[i]=i+1;
        pr[i]=i-1;
    }
    nxt[59]=0;
    pr[0]=59;

    t1=(t1)*5;
    if(t1>=60)t1-=60;
    t2=(t2)*5;
    if(t2>=60)t2-=60;

    sm=m*60+s;
    sm*=5;
    sm/=3600;

    sm+=h*5;
    if(sm>=60)sm-=60;
    if(sm==t1)sm=nxt[sm];
    if(sm==t2)sm=nxt[sm];

    if(m==t1)m=nxt[m];
    if(m==t2)m=nxt[m];
    if(s==t1)s=nxt[s];
    if(s==t2)s=nxt[s];
    used[sm]=true;
    used[m]=true;
    used[s]=true;


    bool f=false;
    x=t1;
    while(x!=t2)
    {
        if(used[x])break;
        x=nxt[x];
    }
    if(x==t2)
    {
        cout<<"YES";
        return 0;
    }
    x=t1;
    while(x!=t2)
    {
        if(used[x])break;
        x=pr[x];
    }
    if(x==t2)
    {
        cout<<"YES";
        return 0;
    }
    cout<<"NO";

}
