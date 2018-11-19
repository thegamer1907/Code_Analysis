#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;
int num[16];
int n,k;
int main(){
	bool check = false;
	for(int i=0;i<16;i++)num[i] = 0;
	scanf("%d",&n);
	scanf("%d",&k);
	for(int i=1;i<=n;i++){
		int number = 0;
		for(int j=0;j<k;j++){
			int digit;
			scanf("%d",&digit);
			if(digit)number |= (1 << j);
		}
		num[number]++;
	}
	for(int i=0;i<(1 << k);i++){
		for(int j=0;j<(1 << k);j++){
			if(((i & j) == 0) && num[i] && num[j])check = true;
		}
	}
	if(num[0])check = true;
	if(check)printf("YES\n");
	else printf("NO\n");
	return 0;
}