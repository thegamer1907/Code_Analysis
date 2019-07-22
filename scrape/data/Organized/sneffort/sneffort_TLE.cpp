#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn = 100000+10;
const ll inf = 1000000000;
queue<ll> q;
int main ()
{
	ll n,k;
	int m;
	while(cin >> n >> m >> k){
		while(!q.empty()){
			q.pop();
		}
		for(int i=0;i<m;i++){
			ll num;
			scanf("%I64d",&num);
			q.push(num);
		}
		ll bias=0;
		int ans=0;
		while(!q.empty()){
			int actualNum = q.front()-bias;
			if(k<actualNum){
				k = ((actualNum-1) / k + 1) * k;
			}
			int biasTmp=0;
			//cout << "q: "  << q.front() << " " << bias << " " << k << endl;
			while(!q.empty() && q.front()-bias<=k){
				q.pop();
				biasTmp++;
			}
			//cout << "biasTmp: "  << biasTmp << endl;
			//if(!q.empty()){
			//	cout << q.front() << endl;
			//}
			bias+=biasTmp;
			ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}