#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

template <typename T>
int CountDistinct(vector<T> a) {
    sort(a.begin(), a.end());
    if (a.empty()) return 0;
    int cnt = 1;
    for (int i = 1; i < a.size(); ++i) {
        if (a[i - 1] == a[i]) continue; else ++cnt;
    }
    return cnt;
}

char ToLower(char ch) {
    if (ch >= 'A' && ch <= 'Z') return 'a' + (ch - 'A');
    return ch;
}

char ToUpper(char ch) {
    if (ch >= 'a' && ch <= 'z') return 'A' + (ch - 'a');
    return ch;
}

string ToLower(string s) {
    for (int i = 0; i < s.size(); ++i) {
        s[i] = ToLower(s[i]);
    }
    return s;
}

string ToUpper(string s) {
    for (int i = 0; i < s.size(); ++i) {
        s[i] = ToUpper(s[i]);
    }
    return s;
}

char ChangeRegister(char ch) {
    if (ch >= 'a' && ch <= 'z') return 'A' + (ch - 'a');
    if (ch >= 'A' && ch <= 'Z') return 'a' + (ch - 'A');
    return ch;
}

string ChangeRegister(string s) {
    for (int i = 0; i < s.size(); ++i) {
        s[i] = ChangeRegister(s[i]);
    }
    return s;
}

vector<char> StringToVector(string s) {
    vector<char> result;
    for (int i = 0; i < s.size(); ++i) {
        result.push_back(s[i]);
    }
    return result;
}

string YesNo(bool ok) {
    if (ok) return "Yes";
    return "No";
}

string YESNO(bool ok) {
    if (ok) return "YES";
    return "NO";
}

int main() {
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> a(3, 0);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            int val;
            cin >> val;
            a[j] += val;
        }
    }
    cout << YESNO(a == vector<int> (3)) << endl;
    return 0;
}
