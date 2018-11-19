#include<bits/stdc++.h>
#define pi                  acos(-1)
#define READ                freopen("in.txt", "r", stdin)
#define WRITE               freopen("out.txt", "w", stdout)
#define INF                 9000000000000000000
#define dist(ax,ay,bx,by)   ((ax-bx)*(ax-bx)+(ay-by)*(ay-by))
#define mod                  1000000007
#define gcd(a,b)            __gcd(a,b)
#define lcm(a,b)            (a*b)/__gcd(a,b)
#define m_p(a,b)            make_pair(a,b)
#define pb                  push_back

typedef long long lli;
using namespace std;



int main()
{
    double h, m, s, t1, t2;
    cin>>h>>m>>s>>t1>>t2;

    double fh, fm, fs, ft1, ft2;

    if(h==12) h=0;
    if(t1==12) t1=0;
    if(t2==12) t2=0;

    fs= (s*360.0)/60.0;
    fm= (m*360.0)/(60.0)+ (s*360)/(60.0*60.0);
    fh= (h*360.0)/(12.0) + (m*360)/(12.0*60.0) + (s*360)/(12.0*60.0*60.0);
    ft1= (t1*360.0)/(12.0);
    ft2= (t2*360.0)/(12.0);

    lli cnt=0;



    if(ft1>ft2) swap(ft1, ft2);

    if(fs>ft1 && fs<ft2) cnt++;

    if(fm>ft1 && fm<ft2) cnt++;

    if(fh>ft1 && fh<ft2) cnt++;

    if(cnt==0 || cnt==3) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
