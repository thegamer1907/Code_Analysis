#include<bits/stdc++.h>
using namespace std;
typedef  long long int ll;
#define  pll pair<ll,ll>
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL) 
#define  vll vector<ll>
#define pb push_back
int temp[100008];
int main()
{
    fast_io;   
    string s;
    cin>>s;
    int n=s.length();
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        temp[i]=1;
        
        else
        {
            temp[i]=0;
        }
        
    }
    temp[n-1]=0;
    for(int i=0;i<n;i++)
    {
        temp[i]+=temp[i-1];
    }
    ll m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        ll l,r;
        cin>>l>>r;
        l--;r--;
        cout<<temp[r-1]-temp[l-1]<<endl;
    }
}