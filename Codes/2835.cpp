#include <bits/stdc++.h>

using namespace std;

#define mod ((long long)1e9 + 7)
#define k (256)

long long fast_exp_mod(long long x, long long a) {
	long long ans = 1, current = x;
	while (a > 0) {
		if (a%2 == 1)
			ans = (ans*current)%mod;
		a /= 2;
		current = (current*current)%mod;
	}
	return ans;
}

long long inv_mod(long long x) {
	return fast_exp_mod(x, mod - 2);
}

const int N = 1234567;

long long kpow[N];

void pre() {
	kpow[0] = 1;
	for (int i = 1; i < N; i++)
		kpow[i] = (kpow[i - 1]*k)%mod;
}

string s;
int n;
vector <long long> ph;

void compute_ph() {
	ph.resize(n);
	ph[0] = s[0];
	for (int i = 1; i < n; i++)
		ph[i] = (ph[i - 1] + (s[i]*kpow[i])%mod)%mod;
}

long long h(int i, int j) {
	if (i == 0)
		return ph[j];
	return (((ph[j] - ph[i - 1] + mod)%mod)*inv_mod(kpow[i]))%mod;
}

bool present(int x) {
	long long ch = ph[x - 1];
	for (int i = 1; i < n - x; i++)
		if (ch == h(i, i + x - 1))
			return 1;
	return 0;
}

int main() {
	ios::sync_with_stdio(0);

	pre();

	cin>>s;
	n = s.size();

	compute_ph();

	vector <int> poss;
	for (int len = 1; len < n; len++)
		if (h(0, len - 1) == h(n - len, n - 1))
			poss.push_back(len);

	if (poss.size() == 0)
		cout<<"Just a legend"<<endl;
	else if (poss.size() == 1) {
		if (present(poss[0]))
			cout<<s.substr(0, poss[0])<<endl;
		else
			cout<<"Just a legend"<<endl;
	}
	else {
		int m = poss.size();
		int low = 0, high = m - 1;
		while (low < high) {
			int mid = (low + high + 1)/2;
			if (present(poss[mid]))
				low = mid;
			else
				high = mid - 1;
		}

		cout<<s.substr(0, poss[low])<<endl;
	}

	return 0;
}