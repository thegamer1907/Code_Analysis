#include <bits/stdc++.h>
using namespace std;



int main(){
	int n,m,maxi = -1, mini;
	scanf("%d %d", &n,&m );
	priority_queue<int, std::vector<int>, std::greater<int> > q;
	for(int i = 0,a; i<n; i++){
		scanf("%d",&a);
		maxi = max(maxi, a);
		q.push(a);
	}
	maxi+=m;
	while(m > 0){
		int p = q.top();
		q.pop();
		p++;
		q.push(p);
		m--;
	}
	while(!q.empty()){
		mini = q.top();
		q.pop();
	}
	printf("%d %d\n", mini,maxi);
}