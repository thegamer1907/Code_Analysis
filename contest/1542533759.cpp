#include<bits/stdc++.h>
#define N 222222
#define M 1000000007
#define MP make_pair
#define PB push_back
#define PII pair<int,int>
#define VI vector<int>
#define X first
#define Y second
#define CL(a) memset(a,0,sizeof a) 
#define fr(i,n) for(int i=1;i<=n;i++)
#define rd(x) scanf("%d",&x)
using namespace std;
int h,m,s,i,t1,t2,v[5];
int main(){
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);h%=12;t1%=12;t2%=12;
	v[1]=(h%12)*3600+m*60+s;
	v[2]=(m*60+s)*12;
	v[3]=s*12*60;
//	v[1]=(h*5)%60,v[2]=m,v[3]=s;t1=(t1*5)%60;t2=(t2*5)%60;
	sort(v+1,v+4);
	t1*=3600;t2*=3600;
	for(i=1;i<=2;i++)if(v[i]<=t1&&t1<=v[i+1]&&v[i]<=t2&&t2<=v[i+1])return puts("YES"),0;
	if((v[3]<=t1||t1<=v[1])&&(v[3]<=t2||t2<=v[1]))return puts("YES"),0;
	puts("NO");
}