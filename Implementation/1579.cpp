#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair

using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string str;
    cin >> str;
    str = 'x' + str;
    int zero[105] = {0}, one[105] = {0};
    for (int i = 1; str[i]; ++i) {
    	if (str[i] == '0') {
    		zero[i] = zero[i - 1] + 1; 
    		one[i] = 0;
    	}
    	else {
    		zero[i] = 0;
    		one[i] = one[i - 1] + 1;
    	}
    	if(zero[i] >= 7 || one[i] >= 7) {
    		cout << "YES";
    		return 0;
    	}
    }
    cout << "NO";
    
    return 0;
}