//HDU2196 求树中每个点能达到的最大距离，结合解题报告看
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int MAX= 2e5 + 50;
typedef long long LL;
LL a[MAX];
int main(int argc, char const *argv[])
{
	LL n, m, k;
	scanf("%I64d%I64d%I64d", &n, &m, &k);

	for(LL i = 0; i < m; i++){
		scanf("%I64d", &a[i]);
	}

	LL top = k;
	LL cnt = 0;
	LL flag = 0;
	for(LL i = 0; i < m; i++){
		//printf("top = %I64d\n", top);
		if(a[i] <= top){
			//printf("i = %d\n", i);
			flag++;
		}
		if(a[i] > top && flag){
			i--;
			top += flag;
			//printf("top = %I64d a[%I64d] = %I64d\n", top, i, a[i]);
			cnt++;
			flag = 0;
		}

		if(a[i] > top && flag == 0){
			LL d = a[i] - top;
			i--;
			if(d % k == 0LL){
				//printf("d = %I64dd\n", d);
				top += d;
			} else{
				top += (d / k + 1LL) * k;
				//printf("99\n");
			}
		}
		
		//printf("top = %I64d\n", top);
	}
	if(flag){
		cnt++;
	}
	printf("%I64d\n", cnt);
	return 0;
}