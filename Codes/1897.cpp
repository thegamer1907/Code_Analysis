#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+10;
map<int ,ll >mp,mmp;
int main()
{
    int n,k;
    int a;
    ll ans;
    ios::sync_with_stdio(false);
    while(cin>>n>>k)
    {
        ans=0;
        mp.clear();
        mmp.clear();
        for(int i=0;i<n;i++)
        {
         cin>>a;
           if(a%(k*k)==0)
            ans+=mmp[a/k];
           if(a%k==0)
            mmp[a]+=mp[a/k];
           mp[a]++;
        }
        cout<<ans<<endl;
    }
}
