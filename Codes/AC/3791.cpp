#include<bits/stdc++.h>
#define ll long long
#define ss string
#define pb push_back
#define rev(i,n) for(ll i=0;i<n;i++)
#define rev1(i,n) for(ll i=n-1;i>=0;i--)
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) v.begin(),v.end()
#define S second
#define F first
#define tci(v,i) for(auto i=v.begin();i!=v.end();i++)
#define MOD 1000000007
#define m(x) x%MOD
#define  rep(i,start,lim) for(ll (i)=(start);i<(lim);i++)
using namespace std;
ll b,s,c,ans,q;
int32_t main()
{
        sync;
        ss a;cin>>a;rev(i,a.length()){ b+=(a[i]=='B');s+=(a[i]=='S');c+=(a[i]=='C');}
        ll nb,ns,nc,pb,ps,r,pc;cin>>nb>>ns>>nc>>pb>>ps>>pc>>r;
        //cout<<b<<" "<<s<<" "<<c<<endl;
        if(b==0){nb=0;pb=0; }if(c==0){nc=0;pc=0; }if(s==0){ns=0;ps=0;}
        while(1)
        {
          //  cout<<nb<<" "<<ns<<" "<<nc<<endl;
            if(nb>=b && ns>=s && nc>=c){ ans++;nb-=b;ns-=s;nc-=c;}
            if((nb==0 && nc==0 && ns==0)|| r==0){break;}
            if(nb<b){ if((b-nb)*pb<=r){r-=(b-nb)*pb;nb=b; }else break;}
            if(ns<s){ if((s-ns)*ps<=r){r-=(s-ns)*ps;ns=s; }else break;}
            if(nc<c){ if((c-nc)*pc<=r){r-=(c-nc)*pc;nc=c; }else break;}
            //cout<<nb<<" "<<ns<<" "<<nc<<endl;
        }
        q=b*pb+c*pc+s*ps;
        ans+=r/q;
        cout<<ans;
}
