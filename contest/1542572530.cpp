#include <iostream>
#include <algorithm>
#include <cmath>
#include <bitset>
#include <queue>
#include <vector>
#define lld long long
#define PB push_back
#define F first
#define S second
#define jizz cin.tie(0);ios_base::sync_with_stdio(0);
#define endl '\n'
using namespace std;
typedef pair<int,int> Pair;
int q[100005][5],K[6],g[7];
int main(){jizz
	int n,k;cin >> n >> k;
	int tmp ,t,tt = 0,t3,t4;
	bool flag = 0,f2 = 0,f3 = 0;
	for(int i = 0 ; i < n ; i++){
		tmp = 0;
		for(int j = 0; j < k ; j++){
			cin >> q[i][j];
			K[j] += q[i][j];
			tmp += q[i][j];
			if(q[i][j] == 1)t = j;
		}if(tmp == 0)flag = 1;
		if(tmp == 1)f2 = 1,tt = t;
		if(tmp == 2 && k == 4){
			f3 = 1;
			if(q[i][0]  && q[i][1]){
				g[0]++;
			}if(q[i][0] && q[i][2]){
				g[1]++;
			}if(q[i][0] && q[i][3]){
				g[2]++;
			}if(q[i][1] && q[i][2]){
				g[3]++;
			}if(q[i][1] && q[i][3]){
				g[4]++;
			}if(q[i][2] && q[i][3]){
				g[5]++;
			}
		}
	}
	if(k == 1){
		if(K[0] < n)cout << "YES" << endl;
		else cout << "NO" << endl;
	}if(k == 2){
		if(K[0] < n && K[1] < n)cout << "YES" << endl;
		else cout << "NO" <<endl;
	}if(k == 3){
		if(flag)cout << "YES" << endl;
		else if(f2 == 1 && K[tt] < n)cout << "YES" << endl;
		else cout << "NO" << endl;
	}if(k == 4){
		if(flag)cout << "YES" << endl;
		else if(f2 == 1 && K[tt] < n)cout << "YES" <<endl;
		else if(f3 == 1){
			if((g[0] && g[5]) || (g[1] && g[4]) || (g[2] && g[3])){
				cout << "YES" << endl;
			}else cout << "NO" << endl;
		}else cout << "NO" << endl;
	}
	return 0;
}