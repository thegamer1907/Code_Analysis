#include <bits/stdc++.h>

using namespace std;

#define N 501010

int n, v[N];

int main(){
	
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++) scanf("%d", &v[i]);
	sort(v+1, v+n+1);
	int ans=0;
	multiset<int> s;
	for(int i=n; i>0; i--){
		
		if(i<=n/2 && s.lower_bound(2*v[i])!=s.end()){
			s.erase(s.lower_bound(2*v[i]));
			ans++;
		}else s.insert(v[i]);
	}
	ans+= s.size();
	printf("%d\n", ans);
}
