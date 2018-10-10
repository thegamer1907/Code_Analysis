#include<iostream>
#include<cstring>
#include<climits>
#include<map>
#include<vector>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstdlib>
#include<numeric>
#include<queue>
#include<stack>
#include<set>
#include<bitset>
#include<iomanip>
#include<unordered_map>
#include<tuple>

using namespace std;

#define ll long long
#define fi first
#define se second
#define all(sdk) sdk.begin(),sdk.end()
#define mll map<ll,ll>
#define INF 1000000007
#define sz 100005
#define pb push_back
#define rep(i,a,b) for(int i=a;i<b;++i)
#define mit(m) for(map<ll,ll> :: iterator it=m.begin();it!=m.end();++it)
using namespace std;

int prefix[10*sz];

map<int,int> m;



int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    string s;
    cin>>s;
    int j=0;
    rep(i,1,s.length())
    {
        while(j>=0 && s[i]!=s[j])
        {
            j=(j==0?-1:prefix[j-1]);
        }
        prefix[i]=j+1;
        ++j;
        if(i!=s.length()-1)
            m[prefix[i]]=1;

    }
    int ans=0;

    if(m[prefix[s.length()-1]])
        ans=prefix[s.length()-1];
    else 
    for(int i=prefix[s.length()-1]-1;i>=0;--i)
    {
        if(m[prefix[i]])
            {ans=prefix[i];break;}

    }
    if(ans)
        rep(i,0,ans)
        cout<<s[i];
    else cout<<"Just a legend";


    





}














