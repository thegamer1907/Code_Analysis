#include <bits/stdc++.h>

using namespace std;

int kb = 0;
int ks = 0;
int kc = 0; 

int nb, ns, nc;
int pb, ps, pc;

long long r;

bool check(long long mid){
	long long needb = max(mid * kb - nb, 0LL);
	long long needs = max(mid * ks - ns, 0LL);
	long long needc = max(mid * kc - nc, 0LL);

	if(needb * pb + needs * ps + needc * pc > r) return false;
	return true;
}

int main(){
    ios_base::sync_with_stdio (false);
    cout << fixed;
    cout.precision(10);
    //freopen ("joke.in","r",stdin);
	//freopen ("joke.out","w",stdout);

	string s;
	cin >> s;

	for(int i = 0; i < s.length(); ++i){
		if(s[i] == 'B') kb++;
		if(s[i] == 'S') ks++;
		if(s[i] == 'C') kc++;	
	}

	cin >> nb >> ns >> nc;
	cin >> pb >> ps >> pc;

	cin >> r;

	long long left = 0;
	long long right = 1e15;

	while(left < right){
		long long mid = (left + right + 1) / 2;
		if(!check(mid)){
			right = mid - 1;
		}else{
			left = mid;
		}
	}

	cout << left;

    return 0;
}
