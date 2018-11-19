#include<bits/stdc++.h>
using namespace std;
int main()
{
    float h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    s=s/5.0;int o=0;
    if(h==12)
        h=0;
    m=(m/5.0)+((s/60.0));
    if(m==0&&s==0)
    {
        o=1;
    }
    else
    {//cout<<m/60.0<<endl;
       // if(m!=0)
        {h=h+(m/60.0);}

//cout<<h<<endl;
  }
    int an1=1;
 //   cout<<o<<' '<<h<<' '<<m<<' '<<s<<endl;

    for(int i=t1;i!=t2;i=((i)%12+1))
    {
        int q1=i;
        int q2=((i)%12+1);
        if(q1==12)
            q1=0;

//         cout<<q1<<' '<<h<<' '<<m<<' '<<s<<' '<<q2<<endl;

        if(o==1){
        if((h==q1||h==q2)||(m>=q1&&m<=q2)||(s>=q1&&s<=q2))
        {
            an1=0;break;
        }}
        else
        {
            if((h>q1&&h<q2)||(m>=q1&&m<=q2)||(s>=q1&&s<=q2))
        {
            an1=0;break;
        }
        }
    }
    if(an1==1)
    {//cout<<"g"<<endl;
        cout<<"YES"<<endl;
        return 0;
    }
    else
    {int an=1;
         for(int i=t2;i!=t1;i=((i)%12+1))
    {
        int q1=i;
        int q2=((i)%12+1);
        if(q1==12)
        {
            q1=0;
        }// cout<<"e"<<q1<<' '<<h<<' '<<m<<' '<<s<<' '<<q2<<endl;
        if(o==1){
        if((h==q1||h==q2)||(m>=q1&&m<=q2)||(s>=q1&&s<=q2))
        {
            an=0;break;
        }}
        else
        {
            if((h>q1&&h<q2)||(m>=q1&&m<=q2)||(s>=q1&&s<=q2))
        {
            an=0;break;
        }
        }
    }
    if(an==1)
    {//cout<<"e"<<endl;
        cout<<"YES"<<endl;
        return 0;
    }
    else
        {cout<<"NO"<<endl;}


    }
}
