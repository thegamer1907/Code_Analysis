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
int h[1000000];
int P[1000000];
int idx;
int m;

int main() {
	
	ios_base::sync_with_stdio(false);
	
	memset(P,0,sizeof(P));
	
	
	cin>>n>>k;
	for (int i=1;i<=n;i++) cin>>h[i];
	for (int i=1;i<=n;i++) P[i]=P[i-1]+h[i];
	
	idx=1;
	m=P[k]-P[0];
	for (int i=1;i<=n-k+1;i++) {
		if (m>P[k+i-1]-P[i-1]) {
			idx=i;
			m=P[k+i-1]-P[i-1];
		}
	}
	
	cout<<idx;
	
	
		
	
	
	return 0;

}
