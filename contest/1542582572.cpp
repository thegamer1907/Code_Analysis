#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include<list>
#include <bitset>
#include <climits>
#include <algorithm>
#define gcd(a,b) __gcd(a,b)
#define FIN	freopen("input.txt","r",stdin)
#define FOUT 	freopen("output.txt","w",stdout)
typedef long long LL;
const LL mod=1e9+7;
const int INF=0x3f3f3f3f;
const double PI=acos(-1.0);
using namespace std;
int main (){
	int h,m,s,t1,t2;
	while (scanf ("%d%d%d%d%d",&h,&m,&s,&t1,&t2)!=EOF){
		if (t1==t2){
			printf ("YES\n");
			continue;
		}
		h%=12;
		double th=h+(m/60.0)+(s/3600.0);
		t1%=12;
		t2%=12;
		double tm=(m+s/60.0)/5.0;
		double ts=s/5.0;
		double temp[10];
		temp[0]=th;temp[1]=ts;temp[2]=tm;
		sort(temp,temp+3);
		if (t1>=temp[0]&&t1<=temp[1]&&t2>=temp[0]&&t2<=temp[1]){
			printf ("YES\n");
			continue;
		}
		if (t1>=temp[1]&&t1<=temp[2]&&t2>=temp[1]&&t2<=temp[2]){
			printf ("YES\n");
			continue;
		}
		if ((t1>=temp[2]||t1<=temp[0])&&(t2>=temp[2]||t2<=temp[0])){
			printf ("YES\n");
			continue;
		}
		printf ("NO\n");
	}
}