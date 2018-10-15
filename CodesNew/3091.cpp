//21:31 21-09-2018
//21:35 21-09-2018
//21:50 21-09-2018 - 660C_2.cpp
//22:05 21-09-2018
//23:27 21-09-2018
//00:03 11-10-2018 - 660C_2_d3.cpp

#include<iostream>

using namespace std;

#define RE(a, b, c) for(int a=(b); a<(c); a++)
#define MAXN 300000

int n, k, a[MAXN], l[MAXN]={0}, cnt=0, ans=0, mxi;

main(){
	//cerr << "Test" << endl;
	//int n, k, a[MAXN], l[MAXN]={0}, cnt=0, ans=0;
	//cerr << "Test" << endl;
	cin >> n >> k;
	RE(i, 0, n) cin >> a[i];
	if(k){
		l[0] = 0;
		cnt = 1-a[0];
	}else{
		l[0] = 1-a[0];
		cnt = 0;
	}
	ans = 1-l[0];
	mxi = 0;
	RE(i, 1, n){
		l[i] = l[i-1];
		cnt += 1-a[i];
		while(cnt>k){
			cnt -= 1-a[l[i]];
			l[i]++;
		}
		if(ans<(i+1-l[i])){
			ans = i+1-l[i];
			mxi = i;
		}
	}
	RE(i, l[mxi], mxi+1) a[i] = 1;
	cout << ans << '\n';
	RE(i, 0, n){
		if(i) cout << ' ';
		cout << a[i];
	}
	cout << '\n';
}

//21:49 21-09-2018 - Stopped 660C_1.cpp
//22:03 21-09-2018
//22:12 21-09-2018
//23:32 21-09-2018
//00:05 11-10-2018
