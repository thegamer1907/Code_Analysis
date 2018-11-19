#include <cstdio>
using namespace std;
const int cst = 60 * 60 * 60;
int main(int argc, char const *argv[])
{
	int h, m, s, t1, t2;
	scanf("%d %d %d %d %d", &h, &m, &s, &t1, &t2);
	h  = (h * 5 * 60 + m) * 60 + s;
	m  = (m     * 60 + s) * 60;
	s  =  s     * 60      * 60;
	t1 = t1 * 5 * 60      * 60;
	t2 = t2 * 5 * 60      * 60;
	if (
		(
			((t2 + (cst) - t1) % (cst) <= (s + (cst) - t1) % (cst)) &&
			((t2 + (cst) - t1) % (cst) <= (m + (cst) - t1) % (cst)) &&
			((t2 + (cst) - t1) % (cst) <= (h + (cst) - t1) % (cst))
		) || (
			((t1 + (cst) - t2) % (cst) <= (s + (cst) - t2) % (cst)) &&
			((t1 + (cst) - t2) % (cst) <= (m + (cst) - t2) % (cst)) &&
			((t1 + (cst) - t2) % (cst) <= (h + (cst) - t2) % (cst))
		)
	) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return 0;
}
