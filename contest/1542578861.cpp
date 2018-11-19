//coder:OX_louis
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
#include <stack>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const int INF = 0x3f3f3f3f;
const int maxn = 1e5+5;
bool vis[16];

int main(){
//	#ifdef LOCAL
//	freopen("C:\\Users\\B208\\Desktop\\data.txt","r",stdin);
//	#endif // LOCAL
	int n,k;
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;i++){
		int idx = 0;
		for(int j=0;j<k;j++){
			int tmp;
			scanf("%d",&tmp);
			idx += tmp*(1<<j);
		}
		vis[idx] = 1;
	}
	for(int i=0;i<(1<<k);i++){
		for(int j=0;j<(1<<k);j++){

			if(vis[i]&&vis[j]){
				if((i&j)==0){
					cout<<"YES"<<endl;
					return 0;
				}
			}
		}
	}
	cout<<"NO"<<endl;
    return 0;
}
