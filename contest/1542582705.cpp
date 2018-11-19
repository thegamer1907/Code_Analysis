
#include<cstdio>
#include<algorithm>
#include<vector>

using namespace std;
double t1, t2;
double arr[3];
double x = 0.001;
int cas[2];
int main() {
	scanf("%lf %lf %lf %lf %lf", &arr[0], &arr[1], &arr[2], &t1, &t2);
	if (arr[0] > 12) arr[0] -= 12;
	arr[1] /= 5;
	arr[2] /= 5;
	if (t1 > t2)swap(t1, t2);

	if (arr[2] > 0) arr[1] += x, arr[0]+=x;
	else if (arr[1] > 0) arr[0] += x;

	for (int i = 0; i < 3; i++) {
		if (arr[i] < t1 || arr[i]>t2 ) {
			cas[0]++;
		}
		else if (arr[i]<t2 && arr[i]>t1) {
			cas[1] ++;
		}
	}
	if (cas[0] == 0 || cas[1] == 0)
		printf("YES");
	else
		printf("NO");
	
	return 0;
}