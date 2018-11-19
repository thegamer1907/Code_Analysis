#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define INF 1e18
#define MOD 1000000007
#define pi pair<ll,ll>
#define sc(x) scanf("%lld",&x)
#define pf(x) printf("%lld\n",x)

bool mark[60];
bool mark2[60];
int main(){
    double h, m, s, t1, t2;
    cin>>h>>m>>s>>t1>>t2;

    bool p=true;
    if(h==12)
    {
        h==0;
    }
    double ang[3];
    ang[0]=h*30 + m/2 + s/120;
    if(ang[0]>=360)
    {
        ang[0]-=360;
    }
    ang[1]=6*m+s/10;
    ang[2]=6*s;

    sort(ang, ang+3);

    double l1=min(30*t1,30*t2);
    double l2=max(30*t1,30*t2);
    if(l2==360)
    {
        l2=l1;
        l1=0;
    }
    // cout<<l1<<" "<<l2<<endl;
    for(int i=0; i<3; i++)
    {
        // cout<<ang[i]<<endl;
        if(l1<=ang[i] && ang[i]<=l2)
        {
            p=false;
        }
    }
    
    if(l1<ang[0] && l2> ang[2])
    {
        p=true;
    }
    if(p==true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    





    

}