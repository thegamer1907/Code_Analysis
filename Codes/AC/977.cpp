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
    int n,k,ans=0,l=0,r=0,cnt=0,ptr=0;        cin>>n>>k;
    string x;                                 cin>>x;
    vector<int> diffs;
    while(r!=n)
    {
        if(x[r]=='b')
            diffs.push_back(r),cnt++;
        if(cnt>k)
            cnt--,l=diffs[ptr++]+1;
        ans=max(ans,r-l+1);
        r++;
    }
    diffs.clear();
    l=0,r=0,cnt=0,ptr=0;
    while(r!=n)
    {
        if(x[r]=='a')
            diffs.push_back(r),cnt++;
        if(cnt>k)
            cnt--,l=diffs[ptr++]+1;
        ans=max(ans,r-l+1);
        r++;
    }
    cout<<ans;
    return 0;
}
