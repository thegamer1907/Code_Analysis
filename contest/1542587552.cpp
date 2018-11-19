#include<bits/stdc++.h>
#define MAX 100005
#define mod 1000000007
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define inf 25
#define Mat vector<vector<int> >
#define int long long
#define coutd(a,b) cout<<fixed<<setprecision((b))<<(a)
const double root2 = 1.414213562;
const double pi = 3.141592653;

using namespace std;
main()
{
    std::ios::sync_with_stdio(false);
    int aa,bb,cc,tt1,tt2;
    cin>>aa>>bb>>cc>>tt1>>tt2;
    double a,b,c,t1,t2,temp;
    aa=aa%12;
    bb=bb%60;
    cc=cc%60;
    a=(aa*30)+(bb*0.5)+((cc*0.5)/60);
    b=(bb*6)+(cc*0.1);
    c=cc*6;
    t1=(tt1%12)*30;
    t2=(tt2%12)*30;
    if(t1>t2)
    {
        temp=t1;
        t1=t2;
        t2=temp;
    }
    //cout<<a<<" "<<b<<" "<<c<<" "<<t1<<" "<<t2<<endl;
    if(a>t1 && a<t2 && b>t1 && b<t2 && c>t1 && c<t2)
    {
        cout<<"YES";
    }
    else if((a<t1 || a>t2) && (b<t1 || b>t2) && (c<t1 || c>t2))
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
    return 0;
}
