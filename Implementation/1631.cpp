#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <functional>
#include <string>
#include <cstring>
#include <cstdlib>
#include <queue>
#define endl '\n'
#define ll long long
using namespace std;

int main(void)
{
	cin.tie(NULL); ios_base::sync_with_stdio(false);
	string input; cin >> input;
	int acc0 = 0, acc1 = 0;
	for(int i = 0; i < input.size(); i++)
	{
		if(input[i] == '0') {acc0++; acc1 = 0;}
		else{acc1++; acc0 = 0;}
		
		if(acc0 == 7 || acc1 == 7) { cout << "YES"; return 0; }
	}

	cout << "NO";
	return 0;
}
