#include<iostream>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
typedef long long int ll;
#define sz(x) ((long long int)(x).size())
#define pb push_back
vector<int> prefix_function (string s) {
	int n = (int) s.length();
	vector<int> pi (n);
	for (int i=1; i<n; ++i) {
		int j = pi[i-1];
		while (j > 0 && s[i] != s[j])
			j = pi[j-1];
		if (s[i] == s[j])  ++j;
		pi[i] = j;
	}
	return pi;
}

int main() {
    int n;
    string s;
    cin >> s;
    n = (int) s.length();
    vector <int> pr;
    pr = prefix_function(s);
    if (pr[n - 1] == 0) {
        cout << "Just a legend" << endl;
        return 0;
    }
    int a = pr[n - 1];
   // cout << a << endl;
   // for (int i = 0; i < n; i++)
    //    cout << pr[i] << " ";
    //cout << endl;
    for (int i = 0; i < n - 1; i++)
        if (pr[i] == pr[n - 1]) {
            for (int j = 0; j < pr[i]; j++)
                cout <<s[j];
            cout << endl;
            return 0;
        }
    a = pr[pr[n - 1] - 1];
    if (a == 0) {
        cout << "Just a legend" << endl;
        return 0;
    }
    for (int i = 0; i < a; i++)
        cout << s[i];
    cout << endl;
    return 0;
}
