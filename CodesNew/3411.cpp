#include<iostream>
#include<vector>
using namespace std;
int main() {
	long long n, m, max = 0, sum = 0;
	cin >> n >> m;
	vector<long long> v(n);
	for(long long i=0; i<n; i++) {
		cin >> v[i];
		if(v[i] > max)
			max = v[i];
		sum += v[i];
	}
	long long l=1, r=100000;
	while(r - l > 1) {
		long long tmp = (l + r) / 2;
		if(tmp * n >= sum + m)
			r = tmp;
		else
			l = tmp;
	}
	// cout << l << " " << r << " " << n << " " << m << " " << sum << endl;
  if(r<max){
    cout << max << " " << max + m;
    return 0;
  }
  if(l * n >= sum + m)
    cout << l << " ";
  else
    cout << r << " ";
  cout << max + m;
}