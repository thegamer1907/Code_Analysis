
#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>

using namespace std;

#define pb push_back
#define mp make_pair
#define ll long long
#define ull unsigned ll
#define db double
#define INF 0x3f3f3f3f
#define MOD 1000000007
#define PII pair<int, int>

int n;
string pwd;
string str[120];

bool check() {
    for (int i=0;i<n;i++) {
        for (int j=i;j<n;j++) {
            if (pwd[0]==str[j][1]&&pwd[1]==str[i][0]) return true;
            if (pwd[0]==str[i][1]&&pwd[1]==str[j][0]) return true;
            if (pwd[0]==str[i][0]&&pwd[1]==str[i][1]) return true;
            if (pwd[0]==str[j][0]&&pwd[1]==str[j][1]) return true;
        }
    }
    return false;
}

int main()
{
    cin >> pwd;
    cin >> n;
    for (int i=0;i<n;i++) cin >> str[i];
    if (check()) printf("YES\n");
    else printf("NO\n");
}
