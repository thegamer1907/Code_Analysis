#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 
typedef vector<int> vi; 
typedef vector<long long int > vll; 
typedef vector<pair<int,int>> pi; 
typedef vector<pair<ll,ll>> pll;
#define rep(i,a,b) for(i=a;i<b;i++) 
#define sep(i,a,b) for(i=a;i>=b;i--)
#define pb push_back
#define srt(s) sort(s.begin(),s.end()) 
#define rev(s) reverse(s.begin(),s.end())
#define mod 1000000007 
ll  i,b,c,a,j,k,l,m,n,p=0,q=0,r,x=0,y=0,w,temp=0,t1,t2,sum=0,mi=INT_MAX,mx=INT_MIN,pr,res;
//map<int,int> m1,m2,m3;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n>>m>>k;
    vector<ll> v(m);
    rep(i,0,m)
    cin>>v[i];
    j=0;
    i=0;
    r=0;
    while(j<m)
    {
        /*double df=(v[j]-j)*1.0;
        l=ceil(df/k);*/
        l=(v[j]-j)/k;
        if(l*k!=v[j]-j)
        l++;
        
        t1=(l-1)*k+1;
        t2=l*k+j;
        while(j<m && t1<=v[j] && v[j]<=t2)
        {
        j++;
        }
        //cout<<endl;
        r++;
    }
    cout<<r<<endl;
    
}