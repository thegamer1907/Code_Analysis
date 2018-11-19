#include<bits/stdc++.h>
using namespace std;
double wei[4];
double h,m,s,t1,t2;
int pan(double x)
{
	if(x>wei[1]&&x<wei[2])
	return 1;
	if(x>wei[2]&&x<wei[3])
	return 2;
	return 3;
}
int main()
{
cin>>h>>m>>s>>t1>>t2;
wei[1]=(h+m/60+s/3600)/12;
if(wei[1]>1)
wei[1]=wei[1]-1;
wei[2]=(m+s/60)/60;
if(wei[2]>1)
wei[2]=wei[2]-1;
wei[3]=s/60;
if(wei[3]>1)
wei[3]=wei[3]-1;
sort(wei+1,wei+4);
if(pan(t1/12)==pan(t2/12))
printf("YES");
else printf("NO");
return 0;
}