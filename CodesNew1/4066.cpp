//19:00 13-08-2018
//19:07 13-08-2018
//19:14 13-08-2018
//19:22 13-08-2018 - 975C_2.cpp

#include<iostream>
#include<algorithm>

using namespace std;

#define MAX 200000
#define RE(a, b, c) for(int a=(b); a<(c); a++)

int n, q, p;
long long* pt;
long long a[MAX], k, sum=0LL;

main(){
	cin >> n >> q;
	RE(i, 0, n){
		cin >> a[i];
		if(i) a[i] += a[i-1];
	}
	RE(i, 0, q){
		cin >> k;
		sum += k;
		//cerr << "Dbg: " << sum << ' ' << a[i] << '\n';
		pt = upper_bound(a, a+n, sum);
		p = pt-a;
		//cerr << "Dbg: " << p << '\n';
		if(p==n){
			p = 0;
			sum = 0LL;
		}
		cout << n-p << '\n';
	}
}

//19:13 13-08-2018
//19:20 13-08-2018
//19:28 13-08-2018

