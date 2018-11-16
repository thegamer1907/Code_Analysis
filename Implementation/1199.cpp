#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test() ull t;cin>>t;while(t--)
#define pb push_back
#define mkp make_pair
#define nl cout<<endl
#define MOD 1000000007
#define loop(i,start,end) for(long long int i=start;i<end;i++)
#define rloop(i,start,end) for(int i=start;i>=end; i--)


int main() 
{

    #ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
   
    ll n,t;
    string s;
    cin>>n>>t>>s;

    while(t--)
    {
        loop(i,0,n-1)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                swap(s[i],s[i+1]);
                i+=1;
            }
        }
    }
    cout<<s<<endl;
}