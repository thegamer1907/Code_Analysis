#include<bits/stdc++.h>
using namespace std;
typedef long long int llt;


main(){
#ifndef ONLINE_JUDGE
freopen("in","r",stdin);
//freopen("out",i"w",stdout);
#endif

int h,m,s,t1,t2,x,mm,ss;
cin>>h>>m>>s>>t1>>t2;
bool h1,h2,m1,m2,s1,s2,fh,fm,fs;
h1=h2=m1=m2=s1=s2=false;
fh=fm=fs=true;
mm=m;
ss=s;

/*
if(s==0)s=60;
if(s==61)s=1;

if(m==0)m=60;
if(m==61)m=1;

if(s%5==0 && (s/5==t1 || s/5==t2))
{s1=true;	s2=true;}
if(s==60 && m%5==0 && (m/5==t1 || m/5==t2))
m1=true;	m2=true;
*/


//seconds
while(1)
{

if(s==0)s=60;
if(s==61)s=1;

//if(fs && s%5==0 && (s/5==t1 || s/5==t2))
//{s++;	continue;}

if(s%5==0 && s/5==t1)
{s1=true;	break;}

if(s%5==0 && s/5==t2)
{s2=true;	break;}
fs=false;
s++;
}
//minuts
while(1)
{
if(ss>0 )m++;
if(m==0)m=60;
if(m==61)m=1;

//if(fm && m%5==0 && (m/5==t1 || m/5==t2))
//{m++;	continue;}

if(m%5==0 && m/5==t1)
{m1=true;	break;}

if(m%5==0 && m/5==t2)
{m2=true;	break;}
fm=false;
if(ss==0)m++;
}
//hour
while(1)
{
if((ss>0 && mm==0)|| mm>0)h++;

if(h==13)h=1;

if(h==t1)
{h1=true;	break;}

if(h==t2)
{h2=true;	break;}


if(ss==0 && mm==0)h++;
}
//cout<<s1<<" "<<m1<<" "<<h1<<" "<<s2<<" "<<m2<<" "<<h2<<endl;
cout<<(((h1&m1&s1)||(h2&m2&s2))?"YES":"NO");
}