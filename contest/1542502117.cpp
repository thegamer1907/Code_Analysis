#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,n) for(int i = a; i < n;i++)
#define FORR(i,a,n) for(int i = a; i >n;i--)
#define ri(x) scanf("%d",&x)
#define rii(x,y) ri(x),ri(y)
#define mp make_pair
#define pb push_back
#define S second
#define F first

typedef long long ll;
double mi,ho,se;
int main(){
	int h,m,s,t1,t2;
	rii(h,m);
	rii(s,t1);
	ri(t2);
	h*=5;
	h%=60;
	t1*=5;
	t1%=60;
	t2*=5;
	t2%=60;
	ho = h +m/60.0+s/360.0;
	mi = m + s/60.0;
	se=s;
	int st = t1;
	FOR(i,0,61)
	{
		if(st == t2)
		{
			printf("YES\n");
			return 0;
		}
		else
		{
			if((st<=ho && (st+1)%60>=ho )||(st<=mi && (st+1)%60>=mi )||(st<=se && (st+1)%60>=se ))
				break;
		}
		st+=1;
		st%=60;
	}
	st = t1;
	FOR(i,0,61)
	{
		if(st == t2)
		{
			printf("YES\n");
			return 0;
		}
		else
		{
			if((st>=ho && ((st-1)<0? st-1+60:st-1)<=ho )||(st>=mi && ((st-1)<0? st-1+60:st-1)<=mi )||(st>=se && ((st-1)<0? st-1+60:st-1)<=se ))
				break;
		}
		st-=1;
		if(st<0)
			st+=60;
	}
	printf("NO\n");
	return 0;
}