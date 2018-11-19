#include<cstdio>
#include<cstring>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
using namespace std;
int main()
{
	int h,m,s,t1,t2;
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	if(t1==t2){
		printf("YES\n");
		return 0;
	}
	else if(t1 > t2){
		int tmp = t1;
		t1 = t2;
		t2 = tmp;
	}
	t1  = t1*5;
	t2 = t2*5;
	h = h * 5;
	int shun = 1;
	if( t1 < s && s < t2) shun = 0;
	if(s == 0){
		if(t1 < m && m < t2) shun = 0;
	}
	else if(t1 <= m && m < t2) shun = 0;
	if(s == 0 && m == 0){
		if(t1 < h && h < t2) shun = 0;
	}
	else {
		if(t1 <= h && h < t2) shun = 0;
	}
	int ni = 1;
	if(t2 == 60){
		if(s < t1) ni = 0;
		if(s == 0) {
			if(m < t1) ni = 0;
		}
		else if(m == 60 || m < t1) ni = 0;
		if(s == 0 && m == 0){
			if(h < t1) ni = 0;
		}
		else if(h == 60 || h < t1) ni = 0;
	}
	else{
		if(s < t1) ni = 0;
		if(s > t2) ni = 0;
		if(s == 0){
			if(m < t1) ni = 0;
			if(m > t2) ni = 0;
		}
		else {
			if(m < t1) ni = 0;
			if(m >= t2) ni = 0;
		}
		if(s == 0 && m == 0){
			if(h < t1) ni = 0;
			if(h > t2) ni = 0;
		}
		else{
			if(h < t1) ni = 0;
			if(h >= t2) ni = 0;
		}
	}
//	printf("%d %d",shun,ni);
	if(!shun && !ni) printf("no\n");
	else printf("yes\n");
	return 0;
}
