#include<iostream>
#include<algorithm>
#include<cstdio> 
#include<cstring>
#include<vector>
using namespace std;
int h,m,s,t1,t2,b[4];
int main(){
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
//	printf("%d %d",t1,t2);
	if(h==12) h=0;
	b[0]=((double)s/60)*360;
//	printf("233");
	if(b[0]) b[1]++;
	b[1]+=(int)(((double)m/60)*360);
	if(b[0]||b[1]) b[2]++;
	b[2]+=(int)(((double)h/12)*360);
	sort(b,b+3);
	t1=(int)((((double)(t1)/12))*360);
	t2=(int)((((double)(t2)/12))*360);
//	printf("%d %d\n",t1,t2);
	if(t1<=b[0]&&t2<=b[0]||t1<=b[0]&&t2>=b[2]||t1>=b[2]&&t2>=b[2]||t1>=b[2]&&t2<=b[0]) {
		printf("YES");
		return 0;
	}
	else if(t1<=b[1]&&t1>=b[0]&&t2<=b[1]&&t2>=b[0]||t1<=b[2]&&t1>=b[1]&&t2<=b[2]&&t2>=b[1]){
		printf("YES");
		return 0;
	}
	else {
		printf("NO");
		return 0;
	}
}