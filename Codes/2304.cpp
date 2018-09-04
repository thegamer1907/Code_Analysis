#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define VV vector
#define pb push_back
#define bitc  __builtin_popcountl
#define m_p make_pair
int main()
{
ios_base::sync_with_stdio(false);
int c[10000001]={0};
int n;
cin>>n;
for(int i=0;i<n;++i)
{
    ll d;
    cin>>d;
    c[d]++;
}
bool s[10000001];
ll ans[10000001]={0};
for(int i=2;i<10000001;++i)
{
    if(!s[i])
    {
        ans[i]+=c[i];
        int j=2*i;
        while(j<10000001)
        {
            ans[i]+=c[j];
            s[j]=true;
            j+=i;
        }
    }
}
for(int i=1;i<10000001;++i)
{
    ans[i]+=ans[i-1];
}
int m;
cin>>m;
while(m)
{
    --m;
    ll l,r;
    cin>>l>>r;
    cout<<ans[min((ll)10000000,r)]-ans[min((ll)10000000,l-1)]<<"\n";
}
}