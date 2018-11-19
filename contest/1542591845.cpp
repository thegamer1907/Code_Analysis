#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
#define ll long long
#define mod 1000000007
#define bitcount    __builtin_popcountll
#define pb push_back
#define pi pair<int,int>
#define pii pair<pi,int>
#define mp make_pair
#define F first
#define S second
#define sz(A) (int)A.size()
string st[100005];
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    string s;
    int n,i,flag=0;
    cin>>s;
    sd(n);
    set<char> s1,s2;
    for(i=0;i<n;i++)
    {
        cin>>st[i];
        if(st[i]==s)
        {
            flag=1;
            cout<<"YES\n";
        }
        s1.insert(st[i][0]);
        s2.insert(st[i][1]);
    }
    if(flag)
        return 0;
    if(s1.find(s[1])!=s1.end()&&s2.find(s[0])!=s2.end())
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
