#include<bits/stdc++.h>
using namespace std;
int t[12][2];
int main()
{
    double h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    //t[s]=1;

    m+=(s/60);
    h+=(m/60);

    s/=5;
    m/=5;
    if(h>=12) h-=12;
    if(m>=12) m-=12;
    if(s>=12) s-=12;
int t=t1;
    //cout<<h<<" "<<m<<" "<<s<<" ";

    bool flag=false,flag2=false;
    while(t1!=t2&&!flag)
    {
        //t1++;
            if(t1==12)
            t1=0;
            if(t1==t2) break;

        if((s>=t1&&s<=t1+1)||(m>=t1&&m<=t1+1)||(h>=t1&&h<=t1+1))
            flag=true;
        else t1++;
    }
    t1=t;

    while(t1!=t2&&!flag2)
    {
        //t1++;
         if(t1==0)
            t1=12;
            if(t1==t2) break;

        if((s<=t1&&s>=t1-1)||(m<=t1&&m>=t1-1)||(h<=t1&&h>=t1-1))
            { flag2=true;}
        else t1--;
    }
    //cout<<flag<<flag2;
    if(!flag||!flag2) cout<<"YES";
    else cout<<"NO";
}
