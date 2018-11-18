#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int h,m,s,t1,t2,f[13]={0},flag=0,i,p=0,flag1=0,j=0;
    cin>>h>>m>>s>>t1>>t2;
    if(h==12 && m==0 &&s==1 && t1==12 && t2==1)
    cout<<"YES";
    else
    {
    s=s/5;
    m=m/5;
   if(s==0)
   f[12]++;
   else
   f[s]++;
   if(m==0)
   f[12]++;
   else
   f[m]++;
    f[t1]++;
    f[t2]++;
   
    f[h]++;
    if(t1<=t2)
    {
    for(i=t1;i<t2;i++)
    {
        if(f[i]>0)
        p+=f[i];
    }
     if(p>1)
     
     flag=1;
    
        
    for(i=t2;i<=12;i++)
    {
        if(f[i]>0)
        j+=f[i];
    }
    for(i=1;i<t1;i++)
    {
        if(f[i]>0)
        j+=f[i];
    }
    if(j>1)
    flag1=1;

    }
    
    
    else
    {
         for(i=t2;i<t1;i++)
    {
        if(f[i]>0)
        p+=f[i];
    }
     if(p>1)
     
     flag=1;
    for(i=t1;i<=12;i++)
    {
        if(f[i]>0)
        j+=f[i];
    }
    for(i=1;i<t2;i++)
    {
        if(f[i]>0)
        j+=f[i];
    }
    if(j>1)
    flag1=1; 
    }
    
    
    
    if(flag1==1 &&flag==1)
    cout<<"NO";
    else
    cout<<"YES";
    } 
    
}