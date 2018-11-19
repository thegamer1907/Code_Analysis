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
#include <cstdlib>
#include <ctime>
using namespace std;
typedef long long LL;

char a[5],b[105];

int main(){
	cin >> a + 1;
	int n,l = 0,ll = 0 ,r = 0,rr = 0,flag = 0;
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> b + 1;
		if(b[1] == a[2]) l++;
		if(b[2] == a[1]) r++;
		if(b[1] == a[1] && b[2] == a[2]) flag = 1;
	}
	if((l >= 1 && r >= 1) || flag == 1) cout << "YES";
	else cout << "NO";
}
