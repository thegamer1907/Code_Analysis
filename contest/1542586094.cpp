#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<ctime>
#include<cassert>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<bitset>
using namespace std;
//char Input[40*1024*1024+5],*pos;
//#define Read() (strtol(pos,&pos,10))
#ifndef Read
int Read(){
	int ret=0,sgn=1;
	char ch;
	while(isspace(ch=getchar()));
	if(ch=='-'){
		sgn=-1;
		ch=getchar();
	}
	do{
		ret=ret*10+(ch-'0');
	}while(isdigit(ch=getchar()));
	return ret*sgn;
}
#endif
double h,m,s,t1,t2;
const double Pi=acos(-1);
struct Sort_Node{
	double Theta;
	bool Point;
}Point[10];
bool operator < (const Sort_Node &x,const Sort_Node &y){
	return x.Theta<y.Theta||(x.Theta==y.Theta);
}
int main(){
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
//#ifdef Read
//	fread(Input,40*1024*1024,1,stdin);
//	pos=Input;
//#endif
	scanf("%lf%lf%lf%lf%lf",&h,&m,&s,&t1,&t2);
	double Theta_s=s/30.0*Pi;
	double Theta_min=m/30.0*Pi+s/1800*Pi;
	double Theta_hour=h/6.0*Pi+m/360.0*Pi+s/21600.0*Pi;
	double Theta_t1=t1/6.0*Pi;
	double Theta_t2=t2/6.0*Pi;
	Point[1]=(Sort_Node){Theta_s,0};
	Point[2]=(Sort_Node){Theta_min,0};
	Point[3]=(Sort_Node){Theta_hour,0};
	Point[4]=(Sort_Node){Theta_t1,1};
	Point[5]=(Sort_Node){Theta_t2,1};
	sort(Point+1,Point+6);
	for(int i=1;i<5;i++)
		if(Point[i].Point==1&&Point[i+1].Point==1){
			puts("YES");
			return 0;
		}
	if(Point[1].Point&&Point[5].Point){
		puts("YES");
		return 0;
	}
	puts("NO");
	return 0;
}

