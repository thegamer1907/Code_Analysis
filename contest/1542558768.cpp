#include <iostream>

using namespace std;

int h, m, s, t1, t2, num, check;
struct Clock
{
    bool l=true, r=true;
} ClockNum[13];
int main()
{
    cin>>h>>m>>s>>t1>>t2;
    h%=12;
    t1%=12;
    t2%=12;
    if (s%5!=0)
    {
        ClockNum[s/5].r=false;
        ClockNum[s/5+1].l=false;
    }
    else
    {
        ClockNum[(s/5-1+12)%12].r=false;
        ClockNum[s/5+1].l=false;
    }
    if (m%5!=0 || (m%5==0 && s>0))
    {
        ClockNum[m/5].r=false;
        ClockNum[(m/5+1)%12].l=false;
    }
    else
    {
        ClockNum[(m/5-1+12)%12].r=false;
        ClockNum[(m/5+1)%12].l=false;
    }
    if (m==0 && s==0) ClockNum[(h-1+12)%12].r=false;
    else ClockNum[h].r=false;
    ClockNum[(h+1)%12].l=false;
    num=0; check=0;
    while (ClockNum[(t1+num)%12].r)
    {
        num++;
        if ( (t1+num)%12==t2 ) check=1;
    }
    num=0;
    while (ClockNum[(t1-num+12)%12].l)
    {
        num++;
        if ( (t1-num+12)%12==t2 ) check=1;
    }
    num=0;
    while (ClockNum[(t2+num)%12].r)
    {
        num++;
        if ( (t2+num)%12==t1 ) check=1;
    }
    num=0;
    while (ClockNum[(t2-num+12)%12].l)
    {
        num++;
        if ( (t2-num+12)%12==t1 ) check=1;
    }
    if (check==1) cout<<"YES";
    else cout<<"NO";
    return 0;
}
