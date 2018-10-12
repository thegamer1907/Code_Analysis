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

template<typename T>
vector<T> SortI(vector<T> a) {
    sort(a.begin(), a.end());
    return a;
}

template<typename T>
vector<T> SortD(vector<T> a) {
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    return a;
}

template<typename T>
bool Prime(T n) {
    if (n <= 1) return false;
    for (T i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

template<typename T>
set<T> GetDistinctSet(vector<T> a) {
    set<T> result;
    a = Sort(a);
    int i = 0;
    while (i < a.size()) {
        int j = i;
        result.insert(a[i]);
        while (j < a.size() && a[i] == a[j]) ++j; --j;
        i = j + 1;
    }
    return result;
}

template<typename T>
map<T, int> GetDistinctMap(vector<T> a) {
    map<T, int> result;
    a = Sort(a);
    int i = 0;
    while (i < a.size()) {
        int j = i;
        while (j < a.size() && a[i] == a[j]) ++j; --j;
        result[a[i]] = j - i + 1;
        i = j + 1;
    }
    return result;
}

template<typename T>
T Gcd(T a, T b) {
    while (a > 0 && b > 0) {
        if (a > b) a %= b; else b %= a;
    }
    return a + b;
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

string ReverseString(string s) {
    string res = "";
    for (int i = (int)s.size() - 1; i >= 0; --i) {
        res += s[i];
    }
    return res;
}
template <typename T>
vector<T> GetDigits(T number) {
    vector<T> result;
    while (number) {
        result.push_back(number % 10);
        number /= 10;
    }
    if (result.empty()) result.push_back(0);
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    vector<int> b(n);
    b[0] = a[0];
    for (int i = 1; i < n; ++i) b[i] = b[i - 1] + a[i];
    int i = 0, j = 0, ans = 0;
    while (i < n) {
        if (i > j) j = i;
        if (a[i] > s) {
            ++i;
            continue;
        }
        while (j < n && b[j] - b[i] + a[i] <= s) ++j; --j;
        ans = max(ans, j - i + 1);
        ++i;
    }
    cout << ans << endl;
    return 0;
}
