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
		llint mod=(a+r)%k;
		if(mod==0) mod=k;
		set <llint>::iterator it=s.lower_bound(a+k-mod+1);
		//cout << (*s.begin())+r << endl;
		//cout << (*s.begin())+r+k-mod+1 << endl;
		//if(it!=s.end()) cout <<"it: " << (*it) << endl;
		llint x;
		if(it!=s.end()) x=(*it);
		else x=1e18;
		//cout << x << endl << endl;
		//cout << (*s.begin()) << " "
		while(s.size()>0 && ((*s.begin()))<x) {
			s.erase(s.begin());
			r-=1;
		}
		//cout << "r: " << r << endl;
		cnt+=1;
	}
	cout << cnt;
	return 0;
}