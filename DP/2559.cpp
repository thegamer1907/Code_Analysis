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
int a[1000000];

int main() {
	
	ios_base::sync_with_stdio(false);
	
	
	cin>>n;
	for (int i=0;i<n;i++) cin>>a[i];
	int len=1;
	int maxlen=1;
	for (int i=0;i<n-1;i++) {
		if (a[i+1]>a[i]) len++;
		else {
			maxlen=max(maxlen,len);
			len=1;
		}
		
	}
	maxlen=max(maxlen,len);
	
	cout<<maxlen;
		
	
		
	
	
	return 0;

}
