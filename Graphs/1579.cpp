#define ll long long


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

int n,t;
int a[100000];
int visited[100000];

int main() {
	
	ios_base::sync_with_stdio(false);
	
	cin>>n>>t;
	memset(a,0,sizeof(a));
	for (int i=1;i<=n-1;i++) cin>>a[i];
	for (int i=1;i<=n;i++) a[i]+=i;
	
	memset(visited,0,sizeof(visited));
	int cur=1;
	while (visited[cur]==0) {
		visited[cur]=1;
		cur=a[cur];
		if (cur==t) {
			cout<<"YES";
			return 0;
		}
	}
	
	cout<<"NO";
	
	
	return 0;

}
