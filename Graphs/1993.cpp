#include <iostream>
#include <map>
#include <vector>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
//typedef map<int,vi> mi;
//typedef long long ll;
int tot = 0;
void det(int v, int pre, int c, int& lim, vvi& t, vi& l) {
	//mi::iterator q = t.find(v);
	//printf("Call v %d\n",v);
	c = c*l[v] + l[v];
	//printf("cats at v%d: %d\n",v,c);
	if(c > lim) {return;}
	//vi m = t[v];
	if(t[v].size() == 1 && t[v][0] == pre) {
		//printf("%d works\n",v);
		tot += 1;
		return;
	}
	for(int i=0;i<t[v].size();i++) {
		//printf("T accessed at new %d\n",t[v][i]);
		if(t[v][i] != pre) {
			//printf("N at %d with %d\n",v,m[i]);
			det(t[v][i],v,c,lim,t,l);
		}
	}
	//printf("Bees %d from v %d\n",s,v);
	//return s;
}
int main() {
	int n,c;
	vi l;
	vvi u;
	//mi o;
	scanf("%d %d ",&n,&c);
	l.assign(n+2,0);
	u.assign(n+2,vi());
	int t;
	for(int i=0;i<n;i++) {
		scanf("%d ",&t);
		l[i+1] = t;
	}
	int a,b;
	while(scanf("%d %d ",&a,&b) == 2){

		//printf("%d \n",a);
		//vi e = u[a];
		u[a].push_back(b);
		//u[a] = e;
		//e = u[b];
		u[b].push_back(a);
		//u[b] = e;
		/*
		mi::iterator q = o.find(a);
		if(q == o.end()) {
			vi th;
			th.push_back(b);
			o.insert(pair<int,vi>(a,th));
		} else {
			q->second.push_back(b);
		}

		q = o.find(b);
		if(q == o.end()) {
			vi th;
			th.push_back(a);
			o.insert(pair<int,vi>(b,th));
		} else {
			q->second.push_back(a);
		}
		*/
	}
det(1,0,0,c,u,l);
	printf("%d\n",tot);
}
