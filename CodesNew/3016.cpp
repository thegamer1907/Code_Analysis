#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
map<int,int>f;
int su=0;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int z=0;
    f[0]++;
    long long z_ans=0,ans=0;
    int zs=1;
    for(int i=0;i<s.size();i++)
    {
       su+=(s[i]-'0');
       f[su]++;
       if(s[i]=='0')zs++;
       if(s[i]=='1')
       {
           z_ans+=(1LL*zs*(zs-1))/2;
           zs=1;
       }
    }
    z_ans+=(1LL*zs*(zs-1))/2;
    if(n==0){
      cout<<z_ans;
      return 0;
    }
    for(auto it=f.begin();it!=f.end();it++)
    {
       ans+=1LL*it->second*(f[(it->first)-n]);
    }
    cout<<ans;

}
