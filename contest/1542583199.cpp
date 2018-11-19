#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    //ifstream cin("in.in");
    ll h,m,s,a,b;
    cin>>h>>m>>s;
    cin>>a>>b;
    a=a*5;
    b=b*5;
    h=h*5;
    ll x=a,y=b,p=0,q=0;
    if(a-b<0)x=a+60;
    if(b-a<0)y=b+60;
    ll hp=h,hq=h;
    if(h<b and h<x)hp+=60;
    if(h<a and h<y)hq+=60;

    if(b<=hp and x>hp)p=1;
    if(a<=hq and y>hq)q=1;

    ll mp=m,mq=m;
    if(m<b and m<x)mp+=60;
    if(m<a and m<y)mq+=60;

    if(b<=mp and x>mp)p=1;
    if(a<=mq and y>mq)q=1;

    ll sp=s,sq=s;
    if(s<b and s<x)sp+=60;
    if(s<a and s<y)sq+=60;

    if(b<=sp and x>sp)p=1;
    if(a<=sq and y>sq)q=1;
    //cout<<p<<" "<<q<<"\n";
    if(p==0 or q==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
