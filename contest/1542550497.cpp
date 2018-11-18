#include<bits/stdc++.h>
using namespace std;
double ph,pm,ps,pt1,pt2;
int main() {
	int h,m,s,t1,t2;
	while (~scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2)) {
		if(t1==12) t1=0;
		if(t2==12) t2=0;
		if(h==12) h=0;
		ps=1.0*s*6;
		pm=1.0*m*6+1.0*s/10;
		ph=1.0*h*30+1.0*m/2+1.0*s/3600*30;
		pt1=1.0*t1*30;
		pt2=1.0*t2*30;
		if (pt1>pt2) swap(pt1,pt2);
		bool flag=false;
		if (pt1==pt2) flag=true;
		else if ((ps>pt1&&ps<pt2)&&(ph>pt1&&ph<pt2)&&(pm>pt1&&pm<pt2))
			flag=true;
		else if ((ps<pt1||ps>pt2)&&(ph<pt1||ph>pt2)&&(pm<pt1||pm>pt2))
			flag=true;
		if (flag) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}

 	     	 	 						   		 	   				