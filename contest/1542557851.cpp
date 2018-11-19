#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
using namespace std;
map<double,int>mp;
int main()
{
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    double hh,mm,ss;
    hh=(double)(h*5==60?0:h*5);
    mm=(double)m;
    ss=(double)s;
    if(mm!=0||ss!=0)
        hh+=0.5;
    if(ss!=0)
       mm+=0.5;
    mp[hh]++;
    mp[mm]++;
    mp[ss]++;
    t1=t1*5==60?0:t1*5;
    t2=t2*5==60?0:t2*5;
    if(t1>t2)
        swap(t1,t2);
    int flag1=0,flag2=0;
    for(double i=t1; i!=t2; i+=0.5)
    {
        if(i==(double)60)
            i=0;
        if(mp[i]&&i!=t1&&i!=t2)
        {
            flag1=1;
            break;
        }
    }
    for(double i=t1; i!=t2; i-=0.5)
    {
        if(mp[i]&&i!=t1&&i!=t2)
        {
            flag2=1;
            break;
        }
        if(i==(double)0)
            i=59.5;
    }
    //cout<<flag1<<" "<<flag2<<endl;
    if(!flag1||!flag2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
 		   	 	  	    		 	  		 	   	