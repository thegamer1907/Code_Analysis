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
int s[1000000];


int main() {
	
	ios_base::sync_with_stdio(false);
	
	cin>>n;
	for (int i=0;i<n;i++) cin>>s[i];
	
	
	sort(s,s+n);
	
	int m=n/2+n%2;
	int cur1=0,cur2=m;
	
	int ans=0;
	while (cur1<m) {
		while (cur2<n) {
			if (s[cur1]*2<=s[cur2]) {
				ans++;
				cur2++;
				break;
			}
			cur2++;
		}
		cur1++;
	}
	
	
	cout<<n-ans;
	
	
	
	
	return 0;

}
