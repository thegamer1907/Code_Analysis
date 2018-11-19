#include<bits/stdc++.h>
using namespace std;
double hh,mm,ss,tt1,tt2;
vector<double> v;
int main()
{
    long long h,m,s,t1,t2,i,pos1,pos2;
    cin>>h>>m>>s>>t1>>t2;
    ss=s*6;
    mm=m*6+s/10.0;
    //cout<<mm<<endl;
    //cout<<mm/6<<endl;
    hh=h*30+mm/12.0;
    if(hh>360) hh-=360;
    if(mm>360) mm-=360;
    if(ss>360) ss-=360;

    tt1=t1*30;
    tt2=t2*30;
    if(tt1==360) tt1=0;
    if(tt2==360) tt2=0;
    v.push_back(ss);
    v.push_back(mm);
    v.push_back(hh);
    //printf("%.6f\n",hh);
   // cout<<mm<<' '<<hh<<' '<<ss<<' '<<tt1<<' '<<tt2<<endl;
    sort(v.begin(),v.end());
    pos1=pos2=-1;

    if(tt1<tt2)
    {
        long long yo1,yo2;
        yo1=yo2=0;
        for(i=0;i<v.size();++i)
        {
            if((v[i]>=tt1)and(v[i]<=tt2))
            {
                yo1++;
            }
            else yo2++;

        }
        if(yo1==0)
        {
            cout<<"YES\n";
            return 0;
        }
        else if(yo2==0)
        {
            cout<<"YES\n";
            return 0;
        }
    }
    else
    {
        swap(tt1,tt2);
        long long yo1,yo2;
        yo1=yo2=0;
        for(i=0;i<v.size();++i)
        {
            if((v[i]>=tt1)and(v[i]<=tt2))
            {
                yo1++;
            }
            else yo2++;

        }
        if(yo1==0)
        {
            cout<<"YES\n";
            return 0;
        }
        else if(yo2==0)
        {
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";


}
