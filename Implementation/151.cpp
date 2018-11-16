#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <set>
#include <string>
#include <map>
#include <deque>
#include <queue>
#include <functional>
#include <algorithm>

typedef long long ll;
typedef long double ld;

const int INF = int(1e9)+111;
const ll LINF = int(1e18)+1111;

#define pb push_back
#define x first
#define y second
#define sz(s) int(s.size())
#define all(v) v.begin(), v.end()

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//ifstream cin("input.txt");
	int n,a,b;
	cin >> n;
	cin >> a >> b;
	int v[9] = {2,4,8,16,32,64,128,256};
	for (int i = 0;i<8;i++){
		for (int j = 0;j<(n+v[i]-1)/v[i];j++){
			if (v[i]*j + 1 <=a && v[i]*(j+1) >= a && v[i]*j + 1 <= b && v[i]*(j+1) >=b){
				if (v[i]>=n) 
					cout << "Final!";
				else
					cout << i+1;
				return 0;
			}
		}
	}
	
		
	return 0;

}
