#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio (false);
	cout << fixed;
	cout.precision(10);
	if(fopen("joke.in", "r")){
		freopen ("joke.in","r",stdin);
		freopen ("joke.out","w",stdout);
	}
	
	long long n, m, k;
	cin >> n >> m >> k;
	vector<long long> p(m);
	for(int i = 0; i < m; ++i){
		cin >> p[i];
		p[i]--;
	}

	long long delta = 0;
	long long curi = 0;
	long long res = 0;
	
	bool b = true;
	while(b){
		//cout << "iter " << res << endl;
		long long di = 0;
		long long curpage = (p[curi] - delta) / k;
		//cout << "curpage " << curpage << endl;
		bool stillhave = false;
		for(long long i = curi; i < m; ++i){
			//cout << p[i] << " " << (p[i] - delta) / k << endl;
			if((p[i] - delta) / k == curpage){
				di++;
			}else{
				stillhave = true;
				break;
			}
		}

		delta += di;
		curi += di;
		res++;
		if(!stillhave){
			break;
		}
	}

	cout << res;
	return 0;
}