#include<cstdio>
#include<algorithm>

int h,m,s,ta,tb;
bool reach;

int main()
{
	scanf("%d%d%d%d%d",&h,&m,&s,&ta,&tb);

	int Th=60*(60*(h%12)+m)+s;
	int Tm=60*12*m+12*s;
	int Ts=60*12*s;

	if(Th>Tm) Th^=Tm^=Th^=Tm;
	if(Tm>Ts) Tm^=Ts^=Tm^=Ts;
	if(Th>Tm) Th^=Tm^=Th^=Tm;
	if(Tm>Ts) Tm^=Ts^=Tm^=Ts;
	if(Th>Tm) Th^=Tm^=Th^=Tm;
	if(Tm>Ts) Tm^=Ts^=Tm^=Ts;

	int Ta=60*60*(ta%12);
	int Tb=60*60*(tb%12);

	if(Ta>Th&&Ta<Tm&&Tb>Th&&Tb<Tm) reach=true;
	if(Ta>Tm&&Ta<Ts&&Tb>Tm&&Tb<Ts) reach=true;
	if((Ta>Ts||Ta<Th)&&(Tb>Ts||Tb<Th)) reach=true;

	reach?puts("YES"):puts("NO");

	return 0;
}
