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

using namespace std;

int n;
int m;
int a[100005];
int cnt[100005];
set<int> dist;


int main() {
	
	cin>>n;
	cin>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	memset(cnt,0,sizeof(cnt));
	
	for(int i=n;i>=0;i--) {
		if (dist.find(a[i])==dist.end()) {
			dist.insert(a[i]);
			cnt[i] = cnt[i+1]+1;
		} else {
			cnt[i]=cnt[i+1];
		}
	}
	
	for(int i=0;i<m;i++) {
		int l;
		cin>>l;
		cout<<cnt[l]<<endl;
	}
	
	
	
	
	return 0;

}
