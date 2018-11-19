#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define pb push_back
#define mp make_pair
typedef long long ll;
const ll inf = 1e12;

int main()
{
    ios_base::sync_with_stdio(false);
    ll h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    if(h==12)h=0;
    if(t1==12)t1=0;
    if(t2==12)t2=0;
    if(t1>t2)swap(t1,t2);

    ll flag=0;
    t1*=30;
    t2*=30;
    double hx=h*30+ (double)m/2+(double)s/120;
    double mx = m*6 + (double)s/10;
    s*=6;

    ll cnt=0;
    if(hx>=t1 && hx<=t2)cnt++;
    if(mx>=t1&&mx<=t2)cnt++;
    if(s>=t1&&s<=t2)cnt++;
    if(cnt==3)flag=1;

    cnt = 3 -cnt;
    if(hx==t1 || hx==t2)cnt++;
    if(mx==t1||mx==t2)cnt++;
    if(s==t1||s==t2)cnt++;
    if(cnt==3)flag=1;

    //cout<<hx<<" "<<mx<<" "<<s<<" "<<t1<<" "<<t2<<endl;

    if(flag)cout<<"YES";
    else cout<<"NO";

}

