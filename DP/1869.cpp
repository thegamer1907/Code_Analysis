#include<bits/stdc++.h>
using namespace std;

#define f0(i,n) for(int i=0;i<=n;i++)
#define ll long long
#define input int t;cin>>t;while(t--)
#define f1(i,n) for(int i=1;i<n;i++)
#define f2(i,n) for(int i=2;i<=n;i++)
#define arrinp ll a[n];for(int i=0;i<n;i++){ cin>>a[i]; }
#define strinp string s;cin>>s;ll l=s.length();
#define pb push_back
#define mp make_pair

int main(){
    strinp
    int pos=-1;
    f0(i,l-2)
    {
        if(s[i]=='A'&&s[i+1]=='B')
        {
            pos=i+2;
            break;
        }
    }
    if(pos!=-1)
    {
    for(int j=pos;j<l-1;j++)
    {
        if(s[j]=='B'&&s[j+1]=='A')
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    }
    pos=-1;
    f0(i,l-2)
    {
        if(s[i]=='B'&&s[i+1]=='A')
        {
            pos=i+2;
            break;
        }
    }
    if(pos!=-1)
    {
    for(int j=pos;j<l-1;j++)
    {
        if(s[j]=='A'&&s[j+1]=='B')
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    }
    cout<<"NO"<<endl;
    return 0;
}