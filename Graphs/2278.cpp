#include <iostream>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <math.h>
#include <cstring>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <time.h> 
#include <stack>

using namespace std;

int n;
int p[3000];
int num[3000];

void fn(int cur) {
	if (num[p[cur]]!=0) {
		num[cur]=num[p[cur]]+1;
		return;
	}
	
	fn(p[cur]);
	num[cur]=num[p[cur]]+1;
	return;
}

int main() {
	
	ios_base::sync_with_stdio(false);
	
	cin>>n;
	memset(num,0,sizeof(num));
	for (int i=1;i<=n;i++){
		cin>>p[i];
		if (p[i]==-1) num[i]=1;
	}
	
	
	
	for (int i=1;i<=n;i++) {
		if (num[i]!=0) continue;
		fn(i);
	}
	
	int m=num[1];
	for (int i=2;i<=n;i++) m=max(m,num[i]);
	
	cout<<m;
	
	return 0;

}
