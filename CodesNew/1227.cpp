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
long long a[1000000];
long long ans[1000000];

int main() {
	
	ios_base::sync_with_stdio(false);
	
	cin>>n;
	for (int i=1;i<=n;i++) cin>>a[i];
	
	for (int i=1;i<=n;i++) {
		if (a[i]-i>0) ans[i]=(a[i]-i)/n+1;
		else ans[i]=(a[i]-i+n)/n;
//		cout<<ans[i]<< " ";
	}
//	cout<<endl;
	
	long long myans=1e10;
	int idx=0;
	
	for (int i=1;i<=n;i++) {
//		cout<<ans[i]*n+i<<" ";
		if (ans[i]*n+i<myans) {
			myans=ans[i]*n+i;
			idx=i;
		}
	}
//	cout<<endl;
	
	cout<<idx;
	
	
	
	return 0;

}
