#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector< vi > vvi;
#define fast_io ios_base::sync_with_stdio(0);
#define show(x) cout<<x<<endl;
#define pret(x) cout<<x<<endl; return 0;
#define disp(x) cout<<x<<" ";
#define let(x,y,z) cout<<x<<" "<<y<<" "<<z<<endl;
ll MOD=1e9+7;
ll MAX=1e17;
vector<int> v[4];

bool two(int i,int j){						//if intersection of v[i],v[j] is  >0 result is 1
	vector<int>a=v[i],b=v[j];
	vector<int> c;
	set_intersection(b.begin(), b.end(),a.begin(), a.end(),back_inserter(c));
	if(c.size()!=0) return 1;
	return 0;
}

bool three(int i,int j,int k){
	vector<int>a=v[i],b=v[j],c=v[k];
	vector<int> d;
	set_intersection(b.begin(), b.end(),a.begin(), a.end(),back_inserter(d));
	a.clear();
	set_intersection(c.begin(), c.end(),d.begin(), d.end(),back_inserter(a));
	if(a.size()!=0) return 1;
	return 0;
}

int main(){
	// fast_io;
	int n,k;
	// cin>>n>>k;
	scanf("%d%d",&n,&k);
	// set<int> s[k];
	for (int i = 0; i < n; ++i)
	{
		int x;
		for(int j=0;j<k;++j){
			scanf("%d",&x);
			if(x==0) v[j].push_back(i);
		}
	}
	if(k==1){
		if(v[0].size()!=0){pret("YES");}
		pret("NO");
	}
	vector<int> inter=v[0];
	for (int i = 0; i < k; ++i)
	{
		if(v[i].size()==0){pret("NO");}
		vector<int> flag;
		set_intersection(inter.begin(), inter.end(),v[i].begin(), v[i].end(),back_inserter(flag));
		inter=flag;
	}
	if(k==2 or inter.size()!=0){pret("YES");}
	if(k==3){
		if(two(0,1)) {pret("YES");}
		if(two(0,2)) {pret("YES");}
		if(two(2,1)) {pret("YES");}
		pret("NO");
		// inter.clear();
		// set_intersection(v[0].begin(), v[0].end(),v[1].begin(), v[1].end(),inter.begin());
		// if(inter.size()!=0){pret("YES");}
		// inter.clear();
		// set_intersection(v[0].begin(), v[0].end(),v[2].begin(), v[2].end(),inter.begin());
		// if(inter.size()!=0){pret("YES");}
		// inter.clear();
		// set_intersection(v[2].begin(), v[2].end(),v[1].begin(), v[1].end(),inter.begin());
		// if(inter.size()!=0){pret("YES");}
	}
	if(two(0,1) and two(2,3)) {pret("YES");}
	if(two(0,2) and two(3,1)) {pret("YES");}
	if(two(0,3) and two(2,1)) {pret("YES");}
	if(three(0,1,2)) {pret("YES");}
	if(three(3,1,2)) {pret("YES");}
	if(three(0,3,2)) {pret("YES");}
	if(three(0,3,1)) {pret("YES");}
	show("NO");
	return 0;
}