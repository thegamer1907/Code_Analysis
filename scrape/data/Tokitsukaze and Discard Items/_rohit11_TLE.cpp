#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

#define mi           map<int,int>
#define pii          pair<int,int>
#define mpi          map<pii,int>
#define vi           vector<int>
#define vpi          vector<pii>
#define pb           push_back
#define mp           make_pair
#define x            first
#define y            second
#define all(a)       (a).begin(),(a).end()
#define fo(i,k,n)    for(int i=k;i<n;i++)
#define fod(i,k,n)   for(int i=k;i>=n;i--)
#define sz(x)        (int)x.size()

#define PI 3.141592653

typedef long long ll;
typedef vector<ll> vl;
typedef vector<pair<ll,ll> > vpl;
typedef pair<ll,ll> pll;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n,m,k;
    cin>>n>>m>>k;
    ll special[m+1]={0};
    fo(i,1,m+1)  cin>>special[i];
    int counts=0,cnt=0,step=0,temp=k;
    while(cnt<m)
    {
        counts=0;
        while((cnt+1+counts)<=m&&(special[cnt+1+counts]-cnt)<=temp)
            counts++;
        if(counts!=0) step++;
        cnt=cnt+counts;
        ll x=special[cnt+1]-cnt;
        if(x>temp){
            if(x%k==0)  temp=x;
            else temp=x-x%k+k;
        }
    }
    cout<<step;
}