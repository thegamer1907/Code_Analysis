#include <bits/stdc++.h>
using namespace std;
const int MAX = 1000000;
int A[MAX];

int main()
{
	int n, m;
	int i = 0, j = 0;
	int aws = 0, sum = 0;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
		sum += A[i];
		while(sum > m)
		{
			sum -= A[j];
			j++;
		}
		aws = max(aws,i-j+1);
	}
	cout << aws << endl;
 	return 0;
}