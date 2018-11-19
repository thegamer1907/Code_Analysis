#include<bits/stdc++.h>
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define C 0.5772156649
#define pi acos(-1.0)
#define ll long long
#define mod 2147493647
#define ls l,m,rt<<1
#define rs m+1,r,rt<<1|1

using namespace std;

const double g=10.0,eps=1e-7;
const int N=1000+10,maxn=60000+10,inf=0x3f3f3f3f;

int main()
{
  //  cout<<3600*12<<endl;
    ios::sync_with_stdio(false);
    cin.tie(0);
    double h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    m=m/5+s/300;
    s=s/5;
    if(m!=0||s!=0)h+=0.5;
    if(t1>t2)swap(t1,t2);
   // cout<<t1<<" "<<t2<<" "<<h<<" "<<m<<" "<<s<<endl;
    int k1=0,k2=0;
    if(t1<=h&&h<=t2)k1=1;
    if(t1<=m&&m<=t2)k1=1;
    if(t1<=s&&s<=t2)k1=1;
    if(t1>=h||h>=t2)k2=1;
    if(t1>=m||m>=t2)k2=1;
    if(t1>=s||s>=t2)k2=1;
   // cout<<k1<<" "<<k2<<endl;
    if(k1&&k2)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}
/********************

********************/
