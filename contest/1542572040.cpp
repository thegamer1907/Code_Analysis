#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll i,j;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll h,m,s,t1,t2,x,y;
    cin>>h>>m>>s>>x>>y;
    t1=min(x,y);
    t2=max(x,y);
    ll f1=1,f2=1;
    if(h>=t2||h<t1)
        f1=0;
    if(m>=t2*5||m<t1*5||s>t2*5||s<t1*5)
        f1=0;

    if(h<t2&&h>=t1)
        f2=0;
    if((m>=t1*5&&m<t2*5)||(s>t1*5&&s<t2*5))
        f2=0;
    if(f1==1 || f2==1)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
