#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <functional>
#include <algorithm>
#include <ctime>
#include <cmath>
#include <vector>
#include <queue>
#include <map>
#include <sstream>
#include <unordered_set>
#include <unordered_map>
#include <sstream>
#include <set>
#include <cassert>
using namespace std;

//ifstream in("C:\\input.txt");
istream& in = cin;


typedef long long LL;
#define pii pair<int,int>
#define pll pair<LL,LL>
#define mp make_pair
#define pb push_back

int n , S;
LL a[100010];



void input(){
	in >> n >> S;
	for (int i = 1; i <= n; ++i){
		in >> a[i];
	}


}

pll cale(LL k){
	vector<LL> all;
	for (int i = 1; i <= n; ++i){
		all.push_back(a[i] + i*k);
	}
	sort(all.begin(), all.end());
	LL sum = 0;
	for (int i = 0; i < k; ++i)
		sum += all[i];


	return mp(k, sum);

}

int main(){

	int TEST_CASE = 1;
	//in >> TEST_CASE;
	while (TEST_CASE-- > 0){
		input();

		int L = 0, R = n;
		pll ans;
		while (L <= R){
			int mid = (L + R) / 2;
			pll ret = cale(mid);
			if (ret.second <= S){
				ans = ret;
				L = mid + 1;
			}
			else{
				R = mid - 1;
			}
		}
		cout << ans.first << " " << ans.second << endl;











	}


	return 0;
}





