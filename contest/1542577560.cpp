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
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    int n,f=0,ok1=0,ok2=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string p;
        cin>>p;
        if(p[1]==s[0])ok1=1;
        if(p[0]==s[1])ok2=1;
        if(p==s)f=1;
        reverse(p.begin(),p.end());
        if(p==s)f=1;
    }
    if((ok1&&ok2)||f)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
/********************

********************/
