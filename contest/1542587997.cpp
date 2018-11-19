#include <bits/stdc++.h>

#define TRACE(x) cerr << #x << " " << x << endl
#define pb push_back
using namespace std;
typedef long long ll;
const int MaxN = 200200;

int h,m,s,t1,t2;

bool between(int x){
//	cout<<5*t1<< " "<<x<<" "<<5*t2<<endl;
	if (5 * t1 <= x && x < 5 * t2) return true;
	return false;
}
int main(){
	cin>>h>>m>>s;
	cin>>t1>>t2;
	h *= 5;
	if (t2 < t1) swap(t1, t2);
	if ((between(h) || between(s) || between(m) ) && (!between(h) || !between(s) || !between(m))) cout<<"NO";
	else cout<<"YES";
	return 0;
}
