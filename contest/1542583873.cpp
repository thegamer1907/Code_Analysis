#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <cstring>
#include <map>
#include <queue>
#include <set>

using namespace std;

int main(void)
{
    int h,m,s,t1,t2;
    while(cin>>h>>m>>s>>t1>>t2)
    {
        if(h==12)
            h=360000;
        else
            h=h*30000;
        
        if(m==0)
            m=360000;
        else
        {
            h=h+m*50;
            m=m*6000;
            if(h>360000)
                h=h-360000;
        }
        
        if(s==0)
            s=360000;
        else
        {
            h=h+s*12;
            m=m+s*100;
            s=s*6000;
            if(h>360000)
                h=h-360000;
            if(m>360000)
                m=m-360000;
        }
        
        if(t1==12)
            t1=360000;
        else
            t1=t1*30000;
        
        if(t2==12)
            t2=360000;
        else
            t2=t2*30000;
        bool flag=false;
        for(int i=t1+1;i<360000+t1;i++)
        {
            int t=i;
            if(t>360000)
                t=t-360000;
            if(t==t2)
            {
                flag=true;
                break;
            }
            if(t==h || t==m || t==s)
                break;
        }
        for(int i=t1-1;i>t1-360000;i--)
        {
            int t=i;
            if(t<=0)
                t=t+360000;
            if(t==t2)
            {
                flag=true;
                break;
            }
            if(t==h || t==m || t==s)
                break;
        }
        if(flag==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
