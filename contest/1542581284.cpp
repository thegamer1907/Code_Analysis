#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	int h,m,s,t1,t2;
	while(cin>>h>>m>>s>>t1>>t2){
		double ts=s*6;double tm=m*6+(double)s/60.0*6;double th=h*30+(double)m/60.0*30+(double)s/3600.0*30;
		if(ts>=360)ts=ts-360;if(tm>=360)tm=tm-360;if(th>=360)th=th-360;
		double t11=t1*30;double t22=t2*30;
		if(t11>=360)t11=t11-360;
		if(t22>=360)t22=t22-360;
		double maxnum=(t11>t22)?t11:t22;
		double minnum=(t11>t22)?t22:t11;
		
		if(((ts<minnum||ts>maxnum)&&(tm>maxnum||tm<minnum)&&(th>maxnum||th<minnum))||(ts>minnum&&ts<maxnum&&tm>minnum&&tm<maxnum&&th>minnum&&th<maxnum))
		{
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
}