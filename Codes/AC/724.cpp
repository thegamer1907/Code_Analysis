#include<bits/stdc++.h>
#define rep(i,l,r) for (int i=l;i<=r;i++)
#define down(i,l,r) for (int i=l;i>=r;i--)
#define maxn 305000
using namespace std;
typedef long long ll;
const int inf=300500;

int main(){
	int n;
	scanf("%d",&n);
	int now=19;
	while (1){
		int x=now,sum=0;
		while (x) sum+=x%10,x/=10;
		if (sum==10) n--;
		if (!n) break;
		now++;
	}
	printf("%d\n",now);
	return 0;
}
