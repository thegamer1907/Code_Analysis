#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cstdlib>
#include<ctime>
#include<cmath>

using namespace std;
int ok=0;
int a,b,c;

int main(){
	
	int i,j,k,t1,t2,a,b,c;
	cin>>a>>b>>c;
	cin>>t1>>t2;
	a=((b==0&&c==0)?2*a:2*a+1)%24;
	b=((b%5==0&&c==0)?(2*(b/5)):(2*(b/5)+1))%24;
	c=((c%5==0)?(2*(c/5)):(2*(c/5)+1))%24;
	for(i=t1*2,j=0;j<=50;j++){
		if(i==a||i==b||i==c)break;
		k=i-1;if(k<0)k+=24;
		i-=2;if(i<0)i+=24;
		if(i==a||i==b||i==c)break;
		if(k==a||k==b||k==c)break;
		if(i==2*t2%24)ok=1;
	}
	for(i=t1*2,j=0;j<=50;j++){
		if(i==a||i==b||i==c)break;
		k=i+1;k%=24;
		i+=2;i%=24;
		if(i==a||i==b||i==c)break;
		if(k==a||k==b||k==c)break;
		if(i==2*t2%24)ok=1;
	}
	cout<<(ok?("YES"):("NO"));

	return 0;
}
