#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
#include<queue>
#include<list>
#include<stack>
#include<set>
#include<map>
#include<string>
#include<sstream>
#include <set>
using namespace std;
#define Max_N (100000 + 100)
int n, k;
int a, b, c, d;
int used[10000];

int main() 
{
	scanf("%d%d", &n, &k);
	int flag = 0;
	memset(used, 0, sizeof(used));
	vector<int> q;
	for (int i = 1; i <= n; i++) {
		int sum = 0;
		for (int j = 1; j <= k; j++) {
			scanf("%d", &a);
			sum = 10 * sum + a;
		}
		//cout << sum << endl;
		if (used[sum] == 0) {
			q.push_back(sum);
			used[sum] = 1;
		}
		else {
			int flag1 = 1;
			int ans = sum * 2;
			for (int s = 1; s <= k; s++) {
				if (ans%10 > 1) flag1 =0;
					ans = ans/10;		
			}
			if (flag1) flag = 1;
		}
		if (sum == 0) flag = 1;
	} 
	for (int i = 0; i < q.size(); i++) {
		for (int j = 0; j < q.size(); j++)  {
			if (i != j) {
				int ans = q[i] + q[j];
				
				int flag1 = 1;
				for (int s = 1; s <= k; s++) {
					if (ans%10 > 1) flag1 =0;
						ans = ans/10;		
				}
				if (flag1) flag = 1;
				
			}
		}
	}
	if (flag) {
		cout << "YES" << endl;
	}
	else	cout << "NO" << endl;
    return 0;

}
