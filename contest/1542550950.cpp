#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int table[16+10];
int main()
{
	memset(table, 0, sizeof(table));
	int m, n, sum, x, flag = 0;
	cin >> m >> n;
	for(int i = 0; i < m; i++){
		sum = 0;
		for(int j = 0; j < n; j++){
			cin >> x;
			sum += (1 << j)*x;
		}
		table[sum]++;
	}
	for(int i = 0; i < 16; i++){
		if(!table[i]) continue;
		for(int j = 0; j < 16; j++){
			if(!table[j]) continue;
			if(!(i&j)){
				flag = 1;
				break;
			}
		}
		if(flag) break;
	}
	if(flag) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0; 
} 