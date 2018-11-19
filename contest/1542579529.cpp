#include<functional>
#include <algorithm>
#include  <iostream>
#include   <ctype.h>
#include   <cstring>
#include   <fstream>
#include    <cstdio>
#include    <vector>
#include    <string>
#include     <cmath>
#include     <deque>
#include     <stack>
#include     <queue>
#include      <list>
#include       <set>
#include       <map>
#define INF 0X7FFFFFFF
#define PI acos(-1.0)
typedef long long ll;
using namespace std;
const int N = 1e6;
inline int getint()
{
	int w = 0, q = 0;
	char c = getchar();
	while ((c<'0' || c>'9') && c != '-') c = getchar();
	if (c == '-') q = 1, c = getchar();
	while (c >= '0'&&c <= '9') w = w * 10 + c - '0', c = getchar();
	return q ? -w : w;
}
int n, k;
struct Node{
	int a[4];
	int t;
	bool operator < (const Node &t1) {
		return t < t1.t;
	}
}node[100005];
int b[5];
int a[20];
int sovle(int x) {
	int t = x;
	int c = 0;
	while (x) {
		if (x & 1)c++;
		x >>= 1;
	}
	if (c == 2) {
		return 15 - t;
	}
	else {
		return 0;
	}
}
int main() {
	n = getint();
	k = getint();
	bool flag = false;
	memset(a, 0, sizeof(a));
	for (int i = 0; i < n; i++) {
		node[i].t = 0;
		int t = 0;
		for (int j = 0; j < k; j++) {
			node[i].a[j] = getint();
			t *= 2;
			t += node[i].a[j];
			node[i].t += node[i].a[j];
			if (node[i].a[j] == 0) {
				b[j] = 1;
			}
		}
		a[t] = 1;
	}
	if (a[0] == 1) {
		flag = true;
	}
	else {
		if (k == 2) {
			if (a[1] == 1 && a[2] == 1) {
				flag = true;
			}
		}
		else if (k == 3) {
			if (a[1] == 1 && b[2] == 1) {
				flag = true;
			}
			else if (a[2] == 1 && b[1] == 1) {
				flag = true;
			}
			else if (a[4] == 1 && b[0] == 1) {
				flag = true;
			}
		}
		else {
			if (a[1] == 1 && b[3] == 1) {
				flag = true;
			}
			else if (a[2] == 1 && b[2] == 1) {
				flag = true;
			}
			else if (a[4] == 1 && b[1] == 1) {
				flag = true;
			}
			else if (a[8] == 1 && b[0] == 1) {
				flag = true;
			}
			else {
				for (int i = 0; i < 16; i++) {
					if (a[i] == 1 && a[sovle(i)] == 1) {
						flag = true;
					}
				}
			}
		}
	}
	if (flag) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
	return 0;
}
