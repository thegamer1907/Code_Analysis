#include<bits/stdc++.h>
#define int              long long
#define pb               push_back
#define all(a)           a.begin(),a.end()
#define endl             '\n'
#define pii              pair<int,int>
#define F                first
#define S                second
#define vi               vector<int>
#define len(s)           (int)s.length()
#define sz(s)            (int)s.size()
#define rep(i,a,b)       for(int i=a;i<b;i++)
#define bs               binary_search
#define lb               lower_bound
#define ub               upper_bound
#define mapi             map<int,int>
#define fat              998244353
#define hell             1000000007
#define N                100005
#define ios              ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int solution()
{
    int n,m,k;
    cin>>n>>m>>k;
    vi a(m);
    rep(i,0,m)
    {
        cin>>a[i];
    }
    sort(all(a));
    int j=0;
    int t=0,ans=0,cut=0;
    int b=k;
    //int ans=0;
    int g=0;
    while(cut!=m)
    {
       j=ub(all(a),b)-a.begin();
       int h=a[j];
       //cout<<j<<" ";
       j=j-g;
       //cout<<j<<endl;
       if(j==0)
       {
           h-=b;
           h=h/k;
           h=h-3;
           if(h>0)
           {
           b+=k*h;
               //cout<<h;
           }
           else
           b+=k;
       }
       else
       {
           cut+=j;
           ans++;
           b+=j;
           
           //cout<<cut<<endl;
       }
       g+=j;
    }
    cout<<ans;
    
}
 
signed main()
{
ios
int tests=1;
//cin>>tests;
while(tests--)
{
    solution();
}
return 0;
}