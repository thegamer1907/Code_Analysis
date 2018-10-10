#include <bits/stdc++.h>

#define fr first
#define sc second
typedef long long ll;
using namespace std;
int n,k,ans,r,l,k1;
string s;
vector<int>po[2];
int main()
{
    cin>>n>>k>>s;
    po[0].push_back(-1);
    po[1].push_back(-1);
    for(int i=0;i<n;i++){
        if(s[i]=='a')po[1].push_back(i);
        if(s[i]=='b')po[0].push_back(i);
    }
    if(k+1>=po[0].size()||k+1>=po[1].size())return cout<<n,0;
    po[0].push_back(n);
    po[1].push_back(n);
    r=k+1,l=0,ans=-1;
    for(;r<po[0].size();r++,l++){
        if(r<po[0].size())
        ans=max(ans,po[0][r]-po[0][l]-1);
        if(r<po[1].size())
        ans=max(ans,po[1][r]-po[1][l]-1);
    }
    cout<<ans;
}
