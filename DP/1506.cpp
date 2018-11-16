#include<iostream>
#include<algorithm>
#include<cstdio>
#include<string.h>
#include<string>
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const int MAXN = 100 + 100;

int main(){
	int n;
	while (scanf("%d", &n) != EOF){
		int maxx = 0;
		int a;
		int num1 = 0, num0 = 0;
		int num = 0;
		int max1 = 0;
		int max0 = 0;
		for (int i = 0; i < n; i++){
			scanf("%d", &a);
			if (a == 0){
				num0++;
				if (num0 - num1 > maxx){
					maxx = num0 - num1;
					max1 = num1;
					max0 = num0;
				}
			} else{
				num++;
				num1++;
				if (num0 - num1 <= 0){
					num1 = 0; num0 = 0;
				}
			}
		}
		if (num == n) printf("%d\n", num - 1);
		else printf("%d\n", num - max1 + max0);
	}
#ifdef __wh
	system("pause");
#endif
	return 0;
}