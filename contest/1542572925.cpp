#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    double c[10];
    int h,m,s,t1,t2;
    cin >> h >> m >> s >> t1 >> t2 ;
    if(h==12) h=0;
    c[0]=(double)(h*3600+m*60+s)/43200*12;
    c[1]=(double)(m*60+s)/3600*12;
    c[2]=(double)s/60*12;
    sort(c,c+3);
    bool ok=false;
    if(t1>=c[0]&&t2>=c[0]&&t1<=c[1]&&t2<=c[1]) ok=true;
    if(t1>=c[1]&&t2>=c[1]&&t1<=c[2]&&t2<=c[2]) ok=true;
    if(((t1>=c[2]&&t1<=12)||(t1<=c[0]&&t1>=0))&&((t2>=c[2]&&t2<=12)||(t2<=c[0]&&t2>=0))) ok=true;
    cout << (ok?"YES":"NO") << endl;
    return 0;
}
