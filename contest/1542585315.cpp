#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <stack>
#include <cstdlib>
#include <ctime>
using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
typedef double DB;

int t1, t2, h, m, s;

int check(int x, bool l) {
	if(t1 > t2) {
		if(l) {
			if(x >= t1 || x < t2) return 1;
			return -1;
		}
		else {
			if(x == t1 || x == t2) return 0;
			else {
				if(x > t1 || x < t2) return 1;
				return -1;
			}
		}
	}
	else {
		if(l) {
			if(x >= t2 || x < t1) return -1;
			return 1;
		}
		else {
			if(x == t1 || x == t2) return 0;
			else {
				if(x > t2 || x < t1) return -1;
				return 1;
			}
		}
	}
}

int main()
{
	scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
	bool s_l, m_l, h_l, l = 0, r = 0;
	int p = s / 5; bool nl = 0;
	if(s % 5 != 0) nl = 1;
	if(check(p, nl) == 1) l = 1;
	else if(check(p, nl) == -1) r = 1;
	else l = r = 1;
	p = m / 5; nl = 0;
	if(m % 5 != 0 || s != 0) nl = 1;
	if(check(p, nl) == 1) l = 1;
	else if(check(p, nl) == -1) r = 1;
	else l = r = 1;
	nl = 0;
	if(m != 0 || s != 0) nl = 1;
	if(check(h, nl) == 1) l = 1;
	else if(check(p, nl) == -1) r = 1;
	else l = r = 1;
	if(l == 1 && r == 1) printf("NO\n");
	else printf("YES\n");
}