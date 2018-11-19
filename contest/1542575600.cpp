#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,m,s,t1,t2,a[5]={0},flag=0;
    int i;
    cin>>h>>m>>s>>t1>>t2;
    if(h==12)
    {
        h=0;
    }
    if(t1==12)
    {
        t1=0;
    }
    if(t2==12)
    {
        t2=0;
    }
    t1=t1*5;
    t2=t2*5;
    h=(h+m/60+s/3600)*5;
    m=(m+s/60);
    double t11=t1;
    double t22=t2;
    a[0]=h;
    a[1]=m;
    a[2]=s;
    a[3]=t1;
    a[4]=t2;
//cout<<t11<<t22;
    sort(a,a+5);
//cout<<t11<<t22;

    for(i=0;i<4;i++)
    {
        if(a[i]==t11)
        {
            if(a[i+1]==t22)
            {
               // cout<<"dca";

                cout<<"YES";
                return 0;
            }
        }
        if(a[i]==t22)
        {
            if(a[i+1]==t11)
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    if((a[0]==t11 && a[4]==t22) || (a[0]==t22 && a[4]==t11  ) )
    {
        cout<<"YES";
        return  0;
    }

    cout<<"NO";
    return 0;

}
