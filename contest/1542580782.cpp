
#include<bits/stdc++.h>
using namespace std;

int main()
{

int hh,mm,ss,aa,bb;
cin>>hh>>mm>>ss>>aa>>bb;
aa%=12;
bb%=12;
if(aa<bb)
{
//cout<<"YES\n";
int ww;
ww=bb;
bb=aa;
aa=ww;	
}
hh%=12;
double h,m,s,a,b;
h=(double)hh*1.0;
m=(double)mm*1.0;
s=(double)ss*1.0;
a=(double)aa*1.0;
b=(double)bb*1.0;
h+=m/60+s/3600;
m+=s/60;

int flag1=0,flag2=0,flag3=0,flag=0;
if(a>h && b <h)
{
	flag1=0;
}
else
flag1=1;
if(a*5.0>m && b*5.0 <m)
{
	flag2=0;
}
else
flag2=1;
if(a*5>s && b*5 <s)
{
	flag3=0;
}
else
flag3=1;
//cout<<flag1<<" "<<flag2<<" "<<flag3<<endl;
if(flag1&&flag2&&flag3)
{
	flag=1;
}
if(flag)
{
	//flag=1;
	cout<<"YES\n";	
}
else
{
flag1=0;
flag2=0;
flag3=0;

if(a>=h && b <=h)
{
	flag1=1;
}
if(a*5>=m && b*5 <=m)
{
	flag2=1;
}
if(a*5>=s && b*5 <=s)
{
	flag3=1;
}
//cout<<flag1<<" "<<flag2<<" "<<flag3<<endl;
if(flag1&&flag2&&flag3)
{
	flag=1;
}
if(flag)
{
	//flag=1;
	cout<<"YES\n";	
}
else
{
cout<<"NO\n";	
}
		
}	



    return 0;
}
