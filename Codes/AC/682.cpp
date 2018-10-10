#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<vector>
#include<cmath>
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
using namespace std;
const int maxn= 5e5;
int K;
bool ok(int o){
	int re=0;
	while (o){
		re+= o%10;
		o/=10;
	}
	return re==10;
}
int main()
{
#ifndef ONLINE_JUDGE	
	freopen("1.in","r",stdin);
	freopen("1.out","w",stdout);
#endif
	scanf("%d",&K);
	int cnt=0;
	for (int i= 1;i<=1e8;i++)
		if (ok(i)){
			cnt++;
			if (cnt==K){
				printf("%d",i);
				break;
			}
		}
	return 0;
}
