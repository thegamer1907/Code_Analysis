/**
 * @author	Moe_Sakiya    	i@tun.moe
 * @date    	2018-02-05 14:09:48
 *
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#include <vector>
#include <stack>
#include <queue>

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;

string pwd;
string str[100];

int main(void) {
	int i, j, n;
	bool flag = false;
	cin >> pwd;
	cin >> n;
	for (i = 0; i < n; i++)
		cin >> str[i];
	for (i = 0; i < n; i++) {
		if (str[i] == pwd)
			flag = true;
		for (j = i; j < n; j++) {
			if (str[i][0] == pwd[1] && str[j][1] == pwd[0])
				flag = true;
			if (str[i][1] == pwd[0] && str[j][0] == pwd[1])
				flag = true;
		}
	}
	if (flag == true)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}