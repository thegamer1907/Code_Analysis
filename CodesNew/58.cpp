#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>
#include <stack>
#include <cmath>
#define exp 1e-11
#define ll long long
using namespace std;
const int  maxn=1e5+10;
double su[100000];
int main()
{
	double m;
	int n;
	scanf("%d%lf",&n,&m);
	for(int i=1;i<=n;i++)
	scanf("%lf",&su[i]);
	sort(su+1,su+n+1);
	double l=su[1],r=m,ans=0;
	for(int i=2;i<=n;i++)
	{
		if(su[i]-l-2*ans<exp){
			l=su[i];
		}
		else{
			ans=(su[i]-l)/2;
			l=su[i];
		}
	}
	ans=max(ans,max(su[1],m-su[n]));
	printf("%.010lf",ans);
	return 0;
}
