#include <bits/stdc++.h>
#define EPS 1e-10;
using namespace std;
typedef unsigned long long ull;
typedef long long ll;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    double a[5];
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    double hh,mm,ss;
    hh = h+m*1.0/60+s*1.0/3600;
    if(hh>12) hh-=12;
    mm = m*1.0+s*1.0/60;
    ss=1.0*s;
    hh = hh*30;
    mm = mm*6;
    ss = ss*6;
    a[0]=hh;
    a[1]=mm;
    a[2]=ss;
    a[0]=min(hh,min(ss,mm));
    a[2]=max(hh,max(ss,mm));
    if(a[0]==hh&&a[2]==ss||a[0]==ss||a[2]==hh)
    {
        a[1]=mm;
    }
    if(a[0]==mm&&a[2]==ss||a[0]==ss&&a[2]==mm)
    {
        a[1]=hh;
    }
    if(a[0]==hh&&a[2]==mm||a[0]==mm&&a[2]==hh)
    {
        a[1]=ss;
    }

    double tt1=t1*1.0*30;
    double tt2=t2*1.0*30;
    /*cout<<a[0]<<endl;
    cout<<a[1]<<endl;
    cout<<a[2]<<endl;
    cout<<tt1<<endl;
    cout<<tt2<<endl;*/
    if(tt1>=a[0]&&tt1<=a[1]&&tt2>=a[0]&&tt2<=a[1])
    {
        puts("YES");
        return 0;
    }
    if(tt1>=a[1]&&tt1<=a[2]&&tt2>=a[1]&&tt2<=a[2])
    {
        puts("YES");
        return 0;
    }
    if((tt1>=a[2]&&tt1<=360||tt1>=0&&tt1<=a[0])&&(tt2>=a[2]&&tt2<=360||tt2>=0&&tt2<=a[0]))
    {
        puts("YES");
        return 0;
    }
    puts("NO");
    return 0;
}







































