#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define e 2.7183
const int N=2e5+5;
vector<ll>v;
map<ll,ll>mp;
set<ll>s,h;
ll a1,a2,a3,a4,a5,a6;
int main()
{
    ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
    ll n,t,y=0,i,x=0,k,cnt=0,ans=0,l,r,maxi=0,sum=0,m,flag=0,w=0,j,a,b,c;
    string s1,s2="",s3;
    cin>>s1>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s3;
        if(s3[1]==s1[0])
        cnt++;
        if(s3[0]==s1[1])
        sum++;
        if(s3==s1)
        ans++;
    }
    //cout<<cnt<<endl;
    if(ans)
    cout<<"YES";
    else if(cnt>=1&&sum>=1)
    cout<<"YES";
    else
    cout<<"NO";


return 0;
}

