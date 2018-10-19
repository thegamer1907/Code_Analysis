/**
 * code generated by JHelper
 * More info: https://github.com/AlexeyDmitriev/JHelper
 * @author Harshad
 */

#include <bits/stdc++.h>
#define f(i,n) for(int i=0;i<n;i++)
#define rep(i,a,b) for(int i=a;i<=b;i++)
typedef long long int ll;
using namespace std;

class TaskC {
public:
	void solve(std::istream& in, std::ostream& out) {
        ll n, k; in>>n>>k;
        vector<int> arr(n);
        f(i, n) in>>arr[i];
        ll res=0;
        map<ll, ll> m1, m2;
        m1[arr[0]]++;
        rep(i, 2, n-1) m2[arr[i]]++;

        rep(i, 1, n-2){
            ll left=(arr[i]%k==0)?m1[arr[i]/k]:0;
            ll right = m2[arr[i]*k];
            res+=left*right;
            m1[arr[i]]++;
            m2[arr[i+1]]--;
        }
        out<<res;

	}
};


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	TaskC solver;
	std::istream& in(std::cin);
	std::ostream& out(std::cout);
	solver.solve(in, out);
	return 0;
}