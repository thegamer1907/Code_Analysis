#include<iostream>
#include<cstdio>
#include<cmath>
#include<cctype>
#include<cstring>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<map>
using namespace std;
const int maxn=105;
int h,m,s,t1,t2;
double hd,md,sd,t1d,t2d;
void workin(){
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	return;
}
void solve(){
	t1d=30*t1;
	t2d=30*t2;
	hd=1.0*h*30+1.0*m*0.5+1.0*s/120;
	md=1.0*m*6+1.0*s/10;
	sd=s*6;
	if(t1d-360>0.00000001){
		t1d-=360;
	}
	if(t2d-360>0.00000001){
		t2d-=360;
	}
	if(hd-360>0.00000001){
		hd-=360;
	}
	if(md-360>0.00000001){
		md-=360;
	}
	if(sd-360>0.00000001){
		sd-=360;
	}
	if(t1d-t2d>0.00000001){
		swap(t1d,t2d);
	}
	bool ok=0;
	if(hd-t1d>=0.00000001 && md-t1d>=0.00000001 && sd-t1d>=0.00000001 && t2d-hd>=0.00000001 && t2d-md>=0.00000001 && t2d-sd>=0.00000001){
		ok=1;
	}
	if((t1d-hd>=0.00000001 || hd-t2d>=0.00000001) && (t1d-md>=0.00000001 || md-t2d>=0.00000001) && (t1d-sd>=0.00000001 || sd-t2d>=0.00000001)){
		ok=1;
	}
	if(ok){
		printf("YES");
	}else{
		printf("NO");
	}
	return;
}
int main(){
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	workin();
	solve();
	return 0;
}
