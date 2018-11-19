#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
int h,m,s,t1,t2;
bool barrier[365];
int main() {
	bool first=true;
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	if(t1!=12)t1%=12;
	if(t2!=12)t2%=12;
	h%=12;
	if(t1>t2)swap(t1,t2);
	barrier[s*6]=true;
	barrier[m*6+s/10]=true;
	barrier[h*30+m/2]=true;
	barrier[360]=barrier[0];
	//printf("%d %d %d\n",s*6,m*6+s/10,h*30+m/2);
	//printf("%d %d\n",t1*30+1,t2*30);
	for(int i=t1*30; i<=t2*30-1; i++)
		if(barrier[i]==true) {
			first=false;
			break;
		}
	if(first==true)
		printf("YES\n");
	else {
		//printf("%d %d\n",t2*30+1,(t1*30+360)%360);
		for(int i=t2*30; i<=t1*30+360-1; i++) {
			//printf("%d\n",i%360);
			if(barrier[i%360]==true) {
				printf("NO\n");
				return 0;
			}
		}
		printf("YES\n");
	}
	return 0;
}

