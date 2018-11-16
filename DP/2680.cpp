#include <stdio.h>
#include <iostream>
#include <sstream>
#include <iomanip>

#include <algorithm>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <utility>

#include <math.h>
#include <complex>

#include <assert.h>
#include <time.h>

#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <list>
#include <bitset>
#define FI first
#define SE second
#define MP make_pair
#define PB push_back
#define endl '\n'
using namespace std;

typedef long long LL;
typedef unsigned long long ULL;

void desperate_optimization(int precision){
  	ios_base::sync_with_stdio(false);
  	cin.tie(0);
  	cout.tie(0);
  	cout.setf(ios::fixed);
  	cout.setf(ios::showpoint);
  	cout.precision(precision);
}

double combin(int n,int r) {
	double ans = 1;
	for(int i = n;i >= 1;i--) ans *= i;
	for(int i = r;i >= 1;i--) ans /= i;
	for(int i = n-r;i >= 1;i--) ans/=i;
	return ans;
}

double fast(double a,int b) {
	double ans = 1;
	for(int i = 0;i < b;i++) ans *= a;
	return ans;
}

double calc(int diff,int ada) {
	int sisa = ada - diff;
	if(sisa % 2 != 0) return 0;
	int p1 = diff + sisa / 2;
	int p2 = sisa / 2;
	return combin(p1 + p2,p1)/fast(2,ada);
}

int main(){
	desperate_optimization(10);
	string s1,s2;
	cin>>s1>>s2;
	int pos = 0;
	for(int i = 0;i < s1.size();i++) {
		if(s1[i] == '+') pos++;
		else pos--;
	}
	int pos2 = 0;
	int q = 0;
	for(int i = 0;i < s2.size();i++) {
		if(s2[i] == '+') pos2++;
		else if(s2[i] == '-') pos2--;
		else q++;
	}
	int diff = abs(pos2 - pos);
	if(diff	> q) cout<<0<<endl;
	else {
		cout<<calc(diff,q)<<endl;
	}
	return 0;
}

