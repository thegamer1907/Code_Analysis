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
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    h=h%12;
    h*=5;
    if(m>0||s>0)
        h++;
    t1*=5;
    t1%=60;
    t2*=5;
    t2%=60;
    //cout<<h<<" "<<m<<" "<<s<<" "<<t1<<" "<<t2<<" ";
    int flag1=0,flag2=0;
    int i=t1,j=t2;
    while(i!=j&&flag1==0)
    {
        i%=60;
        if(i==j)
            break;
        if(i==h||i==m||i==s)
            flag1=1;
        i++;
    }
    //cout<<i<<" "<<j<<" "<<flag1<<endl;
    i=t1;
    j=t2;
    //cout<<t1<<" "<<t2<<endl;
    while(i!=j&&flag2==0)
    {
        j%=60;
        if(i==j)
            break;
        if(j==h||j==m||j==s)
            flag2=1;
        j++;
    }
    //cout<<i<<" "<<j<<" "<<flag2<<endl;
    //cout<<flag1<<" "<<flag2<<endl;
    if(!flag1||!flag2)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
