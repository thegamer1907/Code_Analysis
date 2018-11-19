#include<bits/stdc++.h>
using namespace std;
#define vi vector < long long >
#define pii pair < int , int >
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define ll long long
#define llu unsigned long long
#define MOD 1000000007
#define INF 0x3f3f3f3f
#define dbg(x) { cout<< #x << ": " << (x) << endl; }
#define dbg2(x,y) { cout<< #x << ": " << (x) << " , " << #y << ": " << (y) << endl; }
#define all(x) x.begin(),x.end()
#define mset(x,v) memset(x, v, sizeof(x))
#define sz(x) (int)x.size()
#define fr(i, p, n) for(int i = (int )p; i < (int )n; i++)
#define rev(i, n, p) for(int i = (int )n; i >= (int )p; i--)
#define MAX 100005

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    double h,m,s,t11,t21,t1,t2;
    cin>>h>>m>>s>>t11>>t21;
    
    t1=min(t11,t21);
    t2=max(t11,t21);
    
    m+=(s/60);
    h+=(m/60);
    m=(m/5);
    s=(s/5);
    
    if(h>12.0)
    h=h-12.0;
    
    ll flag=0;
    
    if((m>t1 && m<t2) || (s>t1 && s<t2)|| (h>t1 && h<t2))
    flag=1;
    else
    {
        cout<<"YES"<<endl;
        return 0;
    }
    
    if(((m>t2) && (m>t1)) || ((m<t2) && (m<t1)) || ((h>t2) && (h>t1)) || ((h<t2) && (h<t1)) || ((s>t2) && (s>t1)) || ((s<t2) && (s<t1)) )
    flag=1;
    else
    {
        cout<<"YES"<<endl;
        return 0;
    }
    
    cout<<"NO"<<endl;
    
    
    return 0;
}
