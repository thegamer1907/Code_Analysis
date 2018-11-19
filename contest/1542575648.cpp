#include<bits/stdc++.h>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	double h,m,s,t1,t2,i,j,k,n;
	scanf("%lf%lf%lf%lf%lf",&h,&m,&s,&t1,&t2);
	if(h==12) {
		h=0;
	}
	if(t1 == 12){
		t1=0;
	} 
	if(t2 == 12){
		t2=0;
	}	
	h = h*30 + m/2 + s/120;
	m = m*6 + s/10;
	s = s*6;
	
	t1=30*t1;
	t2=30*t2;
	if(t1>t2) {
		int x = t1;
		t1 = t2;
		t2 = x;
	}
	if((h>t1&&h<t2) && (m>t1&&m<t2) && (s>t1&&s<t2)) {
		printf("YES\n");
		return 0;
	}else if((h<t1 ||h>t2) && (m<t1 || m>t2) && (s<t1 || s>t2)) {
		printf("YES\n");
		return 0;
	}else {
		printf("NO\n");
		return 0;
	}
}
