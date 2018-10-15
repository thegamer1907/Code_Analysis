#include<bits/stdc++.h>
#define prArr(Arr,n) for(int _=0;_<n;_++)   cout<<(Arr)[_]<<" ";
using namespace std;
const int INF=(int)1e9+10;
const int MOD=(int)1e9+7;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long ans=0;
    int n;
    string s;
    cin>>n>>s;
    int cnt[s.size()];
    cnt[0]=(s[0]=='1');
    for(int i=1;i<s.size();i++)
        cnt[i]=cnt[i-1]+(s[i]=='1');
    for(int i=0;i<s.size();i++)
        ans+=upper_bound(cnt+i,cnt+(int)s.size(),cnt[i]+n-(s[i]=='1'))-lower_bound(cnt+i,cnt+(int)s.size(),cnt[i]+n-(s[i]=='1'));
    cout<<ans;
    return 0;
}
