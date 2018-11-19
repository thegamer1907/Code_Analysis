#include<bits/stdc++.h>
#include<iostream>

using namespace std;
#define inf 0x7FFFFFFF
typedef long long ll;
typedef pair<int, int> P;
const int maxn = 1e5 + 5;
const ll INF = 1e18;

int main()
{
    string passwd;
    cin >> passwd;
    int n;
    cin >> n;
    string s[105];
    for(int i=0; i<n; i++) {
        cin >> s[i];
    }
    for(int i=0; i<n; i++) {
        if(s[i]==passwd) {
            puts("YES");
            return 0;
        }
        for(int j=0; j<n; j++) {
            if(s[i][1]==passwd[0] && s[j][0]==passwd[1]) {
                puts("YES");
                return 0;
            }
        }
    }
    puts("NO");
}
