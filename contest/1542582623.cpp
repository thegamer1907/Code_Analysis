#include<cstdio>
using namespace std;
int h,m,s,t1,t2;
bool notgo[15];
bool a,b;
int main(){
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	notgo[h%12]=true;
	notgo[m/5]=true;
	notgo[s/5]=true;
	if(t1<t2){
		int tmp;
		tmp=t2;
		t2=t1;
		t1=tmp;
	}
	if(t1==t2){
		puts("YES");
		return 0;
	}
	for(int i=t2;i<t1;++i)
		if(notgo[i])
			a=true;
	t2+=12;
	for(int i=t1;i<t2;++i)
		if(notgo[i%12])
			b=true;
	if(a&&b)
		puts("NO");
	else
		puts("YES");
	return 0;
}