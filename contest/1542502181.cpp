#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <cstring>
#include <algorithm>
#include <stack>
#include <queue>
#include <iterator>
#include <functional>
#include <unordered_set>
#include <map>
#include <numeric>
#include <bitset>
#include <cmath>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < (int) n; i++)
#define re return
#define vi vector <int>
#define vl vector <ll>
#include <iomanip>
#define PI 3.1415926536
#define pb push_back
using namespace std;

inline int nxt() {
    int x;
    scanf("%d", &x);
    return x;
}


int main() {
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    int n;
    cin >> n;
    bool tr = false, tr1 = false;
    for (int i = 0; i < n; i++)
    {
        string s1;
        cin >> s1;
        if (s1[0] == s[1])
        {
            tr = true;
        }
        if (s1[1] == s[0])
        {
            tr1 = true;
        }
        if (s1 == s)
        {
            cout << "YES";
            re 0;
        }
    }
    if (tr && tr1 )
    {
        cout << "YES";
        re 0;
    }
    cout << "NO";
    return 0;
}