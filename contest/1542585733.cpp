#include <bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef pair <int, int> ii;
typedef vector <int> vi;
typedef vector <ii> vii;

#define INF 1000000000
#define fastIO ios::sync_with_stdio(false);cout.tie(0);cin.tie(0);
#define endl '\n'
#define foreach(v,c) for(typeof((c).begin()) v=(c).begin();v!=(c).end();++v)
#define all(a) a.begin(),a.end()
#define in(a,b) ((b).find(a)!=(b).end())
#define fill(a,v) memset(a,v,sizeof a)
#define sz(a) ((int)(a.size()))
#define mp make_pair
#define pb push_back

int main(){
	float x, y, z, t1, t2, temp;
	cin>>x>>y>>z>>t1>>t2;
	if(y > 0 || z > 0){
		x = x + 0.5;
	}
	y = y/5;
	if(z > 0){
		y = y + 0.0005;
	}
	z = z/5;
	if(t1 > t2){
		temp = t1;
		t1 = t2;
		t2 = temp;
	}
	bool flag1 = 1;
	bool flag2 = 1;
	if(t1 < x && x < t2){
		flag1 = 0;
	}
	else if(t1 < y && y < t2){
		flag1 = 0;
	}
	else if(t1 < z && z < t2){
		flag1 = 0;
	}
	if(t2 < x || (x < t2 && x < t1)){
		flag2 = 0;
	}
	else if(t2 < y || (y < t2 && y < t1)){
		flag2 = 0;
	}
	else if(t2 < z || (z < t2 && z < t1)){
		flag2 = 0;
	}
	if(flag1 || flag2){
		cout<<"YES";
	}
	else cout<<"NO";
}