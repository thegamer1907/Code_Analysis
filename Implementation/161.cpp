typedef long long ll;
typedef long double ld;
#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
#include<math.h>
#include<cmath>
#include<algorithm>
#include<queue>
#include<set>
#include<stack>
#include<map>
#include<unordered_map>
#include<deque>

using namespace std;

ld PI = atan2(0, -1.0);
ll INF = 1e17;
ld eps = 1e-9;
ll MOD = 1e9+7;



int main(){
	cin.tie(0);
	cout.tie(0);
	cin.sync_with_stdio(0);
	int n,a,b;
	cin >> n >> a >> b;
	vector<int>v(n);
	for(int i = 0;i < n;i++){
		v[i] = i+1;
	}
	int ans = 1;
	if(a > b){
		swap(a,b);
	}

	while(v.size()>1){
		vector<int>v1;
		for(int i = 0;i < v.size();i+=2){
			if(v[i] == a && v[i+1]==b){
				if(v.size() == 2){
					cout<<"Final!";
				}else{
					cout << ans;
				}
				return 0;
			}
			if(v[i] == a || v[i+1] == a){
				v1.push_back(a);
				continue;
			}
			if(v[i] == b || v[i+1] == b){
				v1.push_back(b);
				continue;
			}
			v1.push_back(v[i]);
		}
		ans++;
		v = v1;
	}

	return 0;
}