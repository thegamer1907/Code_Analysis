#include<bits/stdc++.h>
using namespace std;
int h,m,s,t1,t2;
struct pt {
	 int angle;int type;
}a[10];
bool cmp(pt a,pt b) { return a.angle<b.angle; }
int main()
 {
 	 cin>>h>>m>>s>>t1>>t2;
 	 a[1].type=1; a[2].type=2; a[3].type=3; a[4].type=4; a[5].type=5;
 	 if (m==0&&s==0) a[1].angle=30*h;
 	  else a[1].angle=30*h+15;
 	 if (s>0) a[2].angle=6*m+3;
 	  else a[2].angle=6*m;
 	 a[3].angle=6*s;
 	 a[4].angle=30*t1;
 	 a[5].angle=30*t2;
 	 sort(a+1,a+5+1,cmp);
 	 for (int i=1;i<=4;i++) { if (a[i].type+a[i+1].type==9) { printf("YES"); return 0; } }
 	 if (a[1].type+a[5].type==9) { printf("YES"); return 0;   }
 	 printf("NO");
 	 return 0;
 }