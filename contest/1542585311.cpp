#include <iostream>
#include <stdio.h>
#include <cstring>
#include <climits>
#include <cmath>
#include <list>
#include <queue>
#include <vector>
#include <algorithm>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
using namespace std;
typedef pair<int, int> iPair;
typedef long long int ll;
typedef unsigned long long ull;

int min(int x, int y) {
	return (x > y ? y : x);
}

int max (int x, int y) {
	return (x > y ? x : y);
}

int main () {
	float t1, t2, r1, r2, a[3];
	cin>>a[0]>>a[1]>>a[2]>>t1>>t2;
	if (a[0] == 12.0)
		a[0] = 0;
	a[0] = (a[0] + a[1]/60 + a[2]/3600);
	a[1] = ((a[1] + a[2]/60)/5);
	a[2] = (a[2]/5);
	sort(a, a+3);
	if (t1 == 12.0)
		t1 = 0;
	if (t2 == 12.0)
		t2 = 0;
	if (t1 < a[0]) r1 = 1;
	else if (t1 > a[0] && t1 < a[1]) r1 = 2;
	else if (t1 > a[1] && t1 < a[2]) r1 = 3;
	else if (t1 > a[2]) r1 = 1;

	if (t2 < a[0]) r2 = 1;
	else if (t2 > a[0] && t2 < a[1]) r2 = 2;
	else if (t2 > a[1] && t2 < a[2]) r2 = 3;
	else if (t2 > a[2]) r2 = 1;

	if (r1 == r2)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;

	return 0;
}