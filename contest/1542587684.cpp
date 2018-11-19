#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 1e5+1;
const int inf = 0x7fffffff;

double h,m,s,t1,t2,d[4];
int main(){
	cin>>h>>m>>s>>t1>>t2;
	d[1]=h*360/12+m*360/12/60+s*360/12/60/60;
	while(d[1]>=360)d[1]-=360;
	d[2]=m*360/60+s*360/60/60;
	while(d[2]>=360)d[2]-=360;
	d[3]=s*360/60;
	while(d[3]>=360)d[3]-=360;
	t1=t1*360/12;t2=t2*360/12;
	bool flag=1;
	if(t2<t1)swap(t1,t2);
	for(int i=1;i<=3;++i)
	if(d[i]<t1||d[i]>t2)flag=0;
	if(flag)return  0*printf("YES");
	for(int i=1;i<=3;++i)
	if(d[i]<t1)d[i]+=360;
	flag=1;
	t1+=360;
	for(int i=1;i<=3;++i)
	if(d[i]<t2||d[i]>t1)flag=0;
	if(flag)return 0*printf("YES");
	cout<<"NO";
}
