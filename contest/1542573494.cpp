#include<bits/stdc++.h>
using namespace std;
int main(){
	int h,m,s,t1,t2;
	while(cin>>h>>m>>s>>t1>>t2)
	{
         double ss=s*1.0*6;
         double mm=m*1.0*6+ss/360*6;
         double hh=h*30+mm/360*30;
         int  t=t1*30;
         int  tt=t2*30;
         int flag=0,flag1=0;
         if(ss==t||ss==tt)flag++;
         if(mm==t||mm==tt)flag++;
         if(hh==t||hh==tt)flag++;
         int  sm=min(t,tt);
         int  big=max(t,tt);
         if(ss>sm&&ss<big)flag1++;
         if(hh>sm&&hh<big)flag1++;
         if(mm>sm&&mm<big)flag1++;
         if(flag1==0||flag1+flag==3)
         cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
	}
	return 0;
} 