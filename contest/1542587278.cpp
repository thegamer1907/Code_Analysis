#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;
double angle1,angle2,angle3;
int h,m,s;
int s1,s2;
bool check1(){
	double delta1 = angle1 - s1,delta2 = angle2 - s1,delta3 = angle3 - s1;
	double delta = s2 - s1;
	if(delta1 < 0.0)delta1 += 360.0;
	if(delta2 < 0.0)delta2 += 360.0;
	if(delta3 < 0.0)delta3 += 360.0;
	if(delta < 0.0)delta += 360.0;
	return delta1 < delta && delta2 < delta && delta3 < delta;
}
bool check2(){
	double delta1 = angle1 - s2,delta2 = angle2 - s2,delta3 = angle3 - s2;
	double delta = s1 - s2;
	if(delta1 < 0.0)delta1 += 360.0;
	if(delta2 < 0.0)delta2 += 360.0;
	if(delta3 < 0.0)delta3 += 360.0;
	if(delta < 0.0)delta += 360.0;
	return delta1 < delta && delta2 < delta && delta3 < delta;
}
int main(){
	scanf("%d%d%d",&h,&m,&s);
	if(h >= 12)h -= 12;
	angle1 = (h + m / 60.0 + s / 3600.0) * 30.0;
	angle2 = (m + s / 60.0) * 6.0;
	angle3 = s * 6.0;
	scanf("%d%d",&s1,&s2);
	s1 *= 30,s2 *= 30;
	if(check1() || check2())printf("YES\n");
	else printf("NO\n");
	return 0;
}