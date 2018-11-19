#include<bits/stdc++.h>
#define ll  int
#define MM 100000
#define MOD 100000007
#define sync ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    sync
    ll t=1;
    //cin>>t;
    ll tt=t;
    while(t--)
    {
        ll n,m,i,j,x,mx=0,cnt=0,p1=0,p2=0,p3=0,p4=0;
        string s,s1,ss;
        cin>>s;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>ss;
            if(ss==s||(ss[0]==s[1]&&ss[1]==s[0])){
                p3=1;
            }
            if(ss[0]==s[1])
                p1=1;
            else if(ss[1]==s[0])
                p2=1;
        }
        if((p1&&p2)||p3)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
