#include<stdio.h>
#include<algorithm>
using std::sort;
#include<vector>
//using std::vector;
using std::pair;
using std::make_pair;
typedef pair<int, int> Pii;
//#define mp(x,y) make_pair(x,y)
#define N_max 100005
typedef long long LL;


int n;
Pii s[N_max];
int main() {
	//freopen("record.txt", "r", stdin);
	scanf("%d", &n);
	int a[1];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", a);
		int c = a[0] - i;
		s[i].first = c>0?c/n+(c%n!=0):0;
		s[i].second = i+1;
	}
	sort(s, s + n);
	printf("%d", s[0].second);
	return 0;
}