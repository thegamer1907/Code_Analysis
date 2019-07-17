#include <iostream>

using namespace std;

int main(){
	long long n, m, k;
	cin >> n >> m >> k;

	long long p[m];
	for(int i = 0; i < m; i++){
		cin >> p[i];
	}

	long long curr = 1;
	int count = 0;
	long long move = k;
	int i = 0;
	while(i < m){
		if(p[i] >= curr){
			curr += move;
			count++;
			if(p[i] >= curr){
				curr = (p[i] + 1) + k - ((p[i] + 1 - curr) % k == 0 ? k : (p[i] + 1 - curr) % k); 
			}
		}else{
			move = 0;
			while(i < m && p[i] < curr){
				i++;
				move++;
			}
		}
		//cout << i << " " << move << " " << curr << endl;
	}

	cout << count << endl;
}