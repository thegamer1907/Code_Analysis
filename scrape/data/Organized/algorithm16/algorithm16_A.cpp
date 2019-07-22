#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
typedef long long int llint;
set <llint> s;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	llint n,m,k,cnt=0,r=0;
	cin >> n >> m >> k;
	for(int i=0;i<m;i++) {
		llint x;
		cin >> x;
		s.insert(x);
	}
	while(!s.empty()) {
		//cout << s.size() << endl;
		llint a=(*s.begin());
		//cout << "a" << endl;
		llint mod=(a+r)%k;
		//cout << "b" << endl;
		if(mod==0) mod=k;
		set <llint>::iterator it=s.lower_bound(a+k-mod+1);
		//cout << (*s.begin())+r << endl;
		//cout << (*s.begin())+r+k-mod+1 << endl;
		//if(it!=s.end()) cout <<"it: " << (*it) << endl;
		llint x;
		if(it!=s.end()) x=(*it);
		else {
			x=1e18;
			x+=1;
		}
		//cout << x << endl;
		//cout << (*s.begin()) << " "
		while(s.size()>0 && ((*s.begin()))<x) {
			//cout << (*s.begin()) << end
			s.erase(s.begin());
			r-=1;
		}
		//cout << "r: " << r << endl;
		cnt+=1;
	}
	cout << cnt;
	return 0;
}
/*
1000000000000000000 2 2
999999999999999999 1000000000000000000
*/