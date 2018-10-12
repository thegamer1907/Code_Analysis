/**
 * code generated by JHelper
 * More info: https://github.com/AlexeyDmitriev/JHelper
 * @author HARSHAD
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

class ProblemCHardProcess {
public:
	void solve(std::istream& in, std::ostream& out) {
	    int n, k; in>>n>>k;
	    int arr[n];
		bool ok = false;
		for(int i = 0; i<n; ++i){
			in>>arr[i];
			if(arr[i]) ok = true;
		}
		if(!ok and k==0){
			out<<0<<'\n';
			for(int x: arr) out<<x<<' ';
			return;
		}
		int j = 0, cnt = 0, ma = 0, res1 = -1, res2 = -1;
		for(int i = 0; i<n; ++i){
			if(arr[i]!=1) {
				if (cnt == k) {
					while (j < n and arr[j] != 0) ++j;
					++j;
					--cnt;
				}
				++cnt;
			}
			if(i-j>=ma){
				ma = i-j;
				res1 = j;
				res2 = i;
			}
		}
		out<<ma+1<<'\n';
		for(int i = 0; i<n; ++i){
			if(i>=res1 and i<=res2) out<<1<<' ';
			else out<<arr[i]<<" ";
		}
	}
};


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ProblemCHardProcess solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}
