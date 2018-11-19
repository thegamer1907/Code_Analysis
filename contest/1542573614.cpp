#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define speed std::ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//#define int long long

using namespace std;

int main()
{
    speed
    ///freopen("input.txt","r",stdin);
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    double m1=double(m)+double(s)/60.0;

    double h1=double(h)+double(m1)/60.0;
    if(h==12)
        h1=double(m1)/60.0;
    double mh=double(m1)/5.0;
    double sh=double(s)/5.0;
    if(mh==0.0)
        mh=12.0;
    if(sh==0.0)
        sh=12.0;
    int minn=min(t1,t2);
    int maxx=max(t1,t2);
    int inc=0,dec=0;
    //cout<<h1<<" "<<mh<<" "<<sh<<endl;
    //cout<<minn<<" "<<maxx<<endl;
    if((h1>=minn&&h1<=maxx)||(mh>=minn&&mh<=maxx)||(sh>=minn&&sh<=maxx))
        inc=1;
    //cout<<inc<<endl;
    if((h1>=maxx&&h1<=12)||(mh>=maxx&&mh<=12)||(sh>=maxx&&sh<=12))
        dec=1;
    if((h1>0&&h1<=minn)||(mh>0&&mh<=minn)||(sh>0&&sh<=minn))
        dec=1;
    if((!inc)||(!dec))
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
    return 0;
}
