#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a[4],h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    if(t1<t2)
    {
        int temp;
        temp=t2;
        t2=t1;
        t1=temp;
    }
    a[1]=h+m/60+s/3600;
    if(a[1]>=12) a[1]-=12;
    a[2]=m/5+s/300;
    if(a[2]>=12) a[2]-=12;
    a[3]=s/5;
    if(a[3]>=12) a[3]-=12;
    if(((a[1]>=t1&&a[1]<12)||(a[1]>=0&&a[1]<=t2))&&((a[2]>=t1&&a[2]<12)||(a[2]>=0&&a[2]<=t2))&&((a[3]>=t1&&a[3]<12)||(a[3]>=0&&a[3]<=t2)))
        cout<<"YES"<<endl;
    else
        if((a[1]>=t2&&a[1]<=t1)&&(a[2]>=t2&&a[2]<=t1)&&(a[3]>=t2&&a[3]<=t1))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    return 0;

}
