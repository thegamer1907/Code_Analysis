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
	int n, a[2] = {0}, b[2] = {0}, i, j, flag = 0;
	string s;
	cin>>s;
	cin>>n;
	string str;
	for (i=0; i<n; i++) {
		cin>>str;
		if (str == s) {
			flag = 1;
		}
		for (j=0; j<2; j++) {
			if (str[j] == s[1])
				a[j]++;
			if (str[j] == s[0])
				b[j]++;
		}
	}
	if (flag == 1)
		cout<<"YES"<<endl;
	else if ((a[0] > 0 && b[1] > 0))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}