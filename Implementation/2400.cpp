#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>
#include <string>
#include <queue>
#include <stack>
#include <cmath>
using namespace std;

int n, k;

int main() {
	cin>>n>>k;
	int timeRem = 60*4 - k;
	int i = 0;
	while (timeRem - (i+1)*5 >= 0) {
		i++;
		timeRem -= i*5;
	}
	cout<<min(i, n)<<endl;
}
