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
char a[110][5];

int main() 
{

	int flag = 0;
	char buf[5];
	int n;
	scanf("%s", buf);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%s", a[i]);
		if (a[i][0] == buf[0] && buf[1] == a[i][1]) flag = 1;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (buf[0] == a[i][1]  && buf[1] == a[j][0]) flag = 1;
		}
	}
	if (flag) cout << "YES" << endl;
	else cout << "NO" << endl;
    return 0;

}
