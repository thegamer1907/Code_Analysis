#include<cstdio>
using namespace std;
double line[100010];
double num[3];
int main()
{
	double h,m,s,t1,t2;
	scanf("%lf %lf %lf %lf %lf",&h,&m,&s,&t1,&t2);
	num[0]=(h+m/60+s/60/60);
	num[1]=(m+s/60)/5;
	num[2]=s/5;
	int count1=0,count2=0;
	if(t1>num[0])
		count1++;
	if(t1>num[1])
		count1++;
	if(t1>num[2])
		count1++;
	if(t2>num[0])
		count2++;
	if(t2>num[1])
		count2++;
	if(t2>num[2])
		count2++;
	if((count1==3&&count2==0)||(count1==0&&count2==3))
		printf("YES");
	else
		if(count1==count2)
			printf("YES");
		else
			printf("NO");
	return 0;
		
}
