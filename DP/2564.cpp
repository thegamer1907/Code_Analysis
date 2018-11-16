#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int n, a;
	int t = 0, p = 0, s = 0;
	scanf("%d", &n);
	while(n--) {
		scanf("%d", &a);
		if(a > p) {
			++t;
		} else {
			t = 1;
		}
		p = a;
		s = max(s, t);
	}
	printf("%d\n", s);
	return 0;
}
