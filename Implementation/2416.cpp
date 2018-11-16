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

int n,k;


int main() {
	
	ios_base::sync_with_stdio(false);
	
	cin>>n>>k;
	
	int t=240-k;
	int ans=0;
	
	for (int i=1;i<=n;i++) {
		if (5*i<=t) {
			ans++;
			t-=5*i;
		}
	}
	
	cout<<ans;
	
	

	return 0;

}
