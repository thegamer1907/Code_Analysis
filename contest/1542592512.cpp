#include <bits/stdc++.h>
#define __ ios_base::sync_with_stdio(0);cin.tie(0);

#define FI first
#define SE second
#define MP make_pair
#define PB push_back

using namespace std;

const int MAXN = 50005, INF = 2*(int)1e9;

typedef pair<int,int> pii;

int n;
char s[105][4], pass[4];

int main() {
    scanf("%s", pass);
    scanf("%d", &n);
    for (int i=1; i<=n; i++) scanf("%s", s[i]);
    
    int ans=0;
    for (int i=1; i<=n; i++) {
        if (s[i][0]==pass[0] && s[i][1] == pass[1]) {
            ans = 1;
            break;
        }
        
        for (int j=1; j<=n; j++) {
            if (s[i][1]==pass[0] && s[j][0]==pass[1]) {
                ans = 1;
                break;
            }
        }
        
        if (ans) break;
    }
        
    if (ans) printf("YES\n");
    else
        printf("NO\n");
}