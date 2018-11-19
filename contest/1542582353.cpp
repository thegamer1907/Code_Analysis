#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,s,m,t1,t2;
    double a[5];
    cin>>h>>m>>s>>t1>>t2;
    a[3]=s/60.0;
    a[2]=m/60+s/60/60;
    a[1]=h/12+a[2]/12;
    t1/=12;
    t2/=12;
    int p=0;
    if(t1>t2)swap(t1,t2);
   // cout<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<t1<<" "<<t2<<endl;
    for(int i=1; i<=3; i++)
    {
        if(a[i]>t1&&a[i]<t2);
        else p=1;
    }
    if(p==1)
    {
        p=0;
        for(int i=1; i<=3; i++)
        {
            if(a[i]<t1||a[i]>t2);
            else p=1;
        }
        if(p)cout<<"NO\n";
        else cout<<"YES\n";
    }
    else cout<<"YES\n";
}
