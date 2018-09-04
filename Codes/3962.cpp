#include <bits/stdc++.h>
#include<stdio.h>
#include <map>
using namespace std;
#define sf(a) scanf("%d",&a)
#define sf2(a,b) scanf("%d %d",&a,&b)
#define sf3(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define pf(a) printf("%d",a)
#define pf2(a,b) printf("%d %d",a,b)
#define pf3(a,b,c) printf("%d %d %d",a,b,c)
#define sfl(a) scanf("%lld",&a)
#define sfl2(a,b) scanf("%lld %lld",&a,&b)
#define sfl3(a,b,c) scanf("%lld %lld %lld",&a,&b,&c)
#define pfl(a) printf("%lld",a)
#define pfl2(a,b) printf("%lld %lld",a,b)
#define pfl3(a,b,c) printf("%lld %lld %lld",a,b,c)
#define nl printf("\n")
#define ll long long
#define se second
#define fi first
#define mk(a, b) make_pair(a, b)
#define pb push_back
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vvpi vector<vector<pii>>
#define pli pair<ll, int>
#define INF 1e9
#define MAX (int)1e6 + 5
#define FI freopen("input.txt", "r", stdin);
#define FO freopen("o.txt", "w", stdout);
#define in ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define edge pair<ll, pair<int, int>>
#define CYA  exit(0);
/*int dx[] = { 0, 1, 0, -1 };
int dy[] = { 1, 0, -1, 0 }; // 4 Direction*/
/*int dx[]={1,1,0,-1,-1,-1,0,1};
int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction*/
int dx[] = { 2,1,-1,-2,-2,-1,1,2 };
int dy[] = { 1,2,2,1,-1,-2,-2,-1 };//Knight Direction*/
const int MOD = 1e9 + 7;
const int N = 1e7 + 5;
ll n, m, k;
vector<ll>v,v2,v3;
bool ok(ll mid){
ll tmpk=k;
for(int i=0;i<3;i++)
    {
       ll need=mid*v[i];
       if(need>v2[i]){
        ll dif=(need-v2[i])*v3[i];
        if(dif>tmpk){
        return 0;
        }
        else {
            tmpk-=dif;
        }
       }
 }
 return 1;
}
int main()
{
    string s;
    cin>>s;
    v.resize(3);
    v2.resize(3);
    v3.resize(3);
    for(int i=0;i<s.size();i++){
        if(s[i]=='B'){
            v[0]++;
        }
        else if(s[i]=='S')
            v[1]++;
        else v[2]++;
    }
    cin>>v2[0]>>v2[1]>>v2[2];
    cin>>v3[0]>>v3[1]>>v3[2];
    cin>>k;

    ll l=0,r=2e12+5,ans=0;
    while(l<r){
        ll mid=(l+r)/2;
       //     cout<<l<< " "<<r<<" "<<mid<<endl;
        if(ok(mid)){
            l=mid+1;
            ans=mid;
        }
        else r=mid-1;
    }
    while(ok(ans))
        ans++;
    ans--;
    cout<<ans<<endl;
}
