#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

int nmap[32];
int found[5];

int main() {
	ios::sync_with_stdio(0);
	int n, k;
	cin >> n >> k;
	for(int i = 0; i<n; i++){
		int num = 0;
		for(int j = 0; j<k; j++){
			int x;
			cin >> x;
			if (!x)
				found[j] = 1;
			num <<= 1;
			num |= x;
		}

		nmap[num]++;
	}
	bool failed = false;
	for(int i = 0; i<k; i++){
		if (!found[i])
			failed = true;
	}
	if(!failed){
		bool success = false;
		if (nmap[0])
			success = true;
		else{
			for(int i = 0; i<k; i++){
				if (nmap[1 << i])
					success = true;
			}
			if(!success){
				for(int i = 0; i<(1<<k); i++){
					if (nmap[i] && nmap[i ^ ((1 << k) - 1)])
						success = true;
				}
			}
		}
		if (success) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}
