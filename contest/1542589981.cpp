#include <bits/stdc++.h>
using namespace std;
#define fo(i,a,b) for (int i = (a); i < (b); i++)
#define FO(i,a,b) for (int i = (a); i < (b); i++)
#define pb push_back
#define eb emplace_back
#define sz(v) int(v.size())
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
#define end asdf
int pos[2], a[3];

int main() {
    scanf("%d %d %d %d %d", a, a+1, a+2, pos, pos+1);
    a[1] /= 5; a[2] /= 5;
    if (a[1]==0) a[1] = 12;
    if (a[2]==0) a[2] = 12;
    sort(a,a+3);
    int ans = 0;
    fo(i,0,2) {
        if (pos[i] <= a[0] || pos[i] > a[2]) pos[i] = 0;
        else if (pos[i] > a[0] && pos[i] <= a[1]) pos[i] = 1;
        else pos[i] = 2;
    }
    if (pos[0]==pos[1]) ans = 1; 
    
    if (ans) puts("YES");
    else puts("NO");

    return 0;
}
