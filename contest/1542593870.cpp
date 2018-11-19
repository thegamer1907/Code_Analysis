#include <iostream>
#include <cstdio>
#include <string.h>
#include <math.h>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <numeric>
#include <stack>
#include <deque>
#include <queue>
#define f first
#define s second
#define pii pair<int, int>
#define mp make_pair
using namespace std;

typedef long long ll;
#define MAX 110
#define INF 2100000000
#define MOD 1000000007

string s[MAX];
int main(){
    string c;
    cin >> c;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
    }
    for (int i = 1;i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            if (c[0] == s[i][1] && c[1] == s[j][0]) {cout << "YES"; return 0;}
            if (c == s[i]) {cout << "YES"; return 0;}
        }
    cout << "NO";
    return 0;
}