#include <cstdio>
#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;

#define forsn(i,s,n) for(int i=(int)(s); i<(int)(n); i++)
#define forn(i,n) forsn(i,0,n)

typedef long long int tint;

vector<int> KMP(string &s){
	int N = s.size()+1;
	vector<int> res(N);
	res[0] = -1;
	res[1] = 0;
	int cnd = 0;
	forsn(i, 2, N){
		while(cnd >= 0 && s[cnd] != s[i-1]){
			cnd = res[cnd];
		}
		cnd++;
		res[i] = cnd;
	}
	return res;
}

int longMaximaLlave(vector<int> &pref){
	int limiteMitad = 0;
	forn(i, (int)(pref.size())-1){
		limiteMitad = max(limiteMitad, pref[i]);
	}
	
	int cnd = pref[(int)pref.size() - 1];
	while(cnd > 0){
		if(cnd <= limiteMitad){
			return cnd;
		}
		cnd = pref[cnd];
	}
	return cnd;
}

int main(){
	string s; cin >> s;
	vector<int> kmp = KMP(s);
	
	int lim = longMaximaLlave(kmp);
	if(lim == 0){
		cout << "Just a legend\n";
	} else {
		forn(i, lim){
			cout << s[i];
		} cout << "\n";
	}
}
