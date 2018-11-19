#include<cstdio>
#include<algorithm>
using std::sort;
typedef long long ll;
inline int read(){
	int x=0,f=1;char ch=getchar();
	for(;ch>'9'||ch<'0';f=ch=='-'?-1:1,ch=getchar());
	for(;ch<='9' &&ch>='0';x=(x<<3)+(x<<1)+ch-'0',ch=getchar());
	return x*f;
}
double ang[4];
int main(){
	int h=read(),m=read(),s=read();
	ang[1]=s*6.0,ang[2]=m*6.0+s*.1,ang[3]=h*30.0+m*.5+s*(1.0/120);
	sort(ang+1,ang+4);
	int t1=read(),t2=read();
	if(t1>t2){t1^=t2;t2^=t1;t1^=t2;}
	double ta1=t1*30.0,ta2=t2*30.0;
	if(ta1>=ang[1]&&ta1<=ang[2]&&ta2>=ang[1]&&ta2<=ang[2])puts("YES");
	else if(ta1>=ang[2]&&ta2<=ang[3]&&ta2>=ang[2]&&ta2<=ang[3])puts("YES");
	else if((ta1<=ang[1]||ta1>=ang[3])&&(ta2<=ang[1]||ta2>=ang[3]))puts("YES");
	else puts("NO");
	return 0;
}