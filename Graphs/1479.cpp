#include <bits/stdc++.h>

using namespace std;

int n, t;
int a[30005];
bool went[30005];

int main(){
    scanf("%d%d", &n, &t);
    for (int i = 1; i < n; ++i){
        scanf("%d", &a[i]);
    }
    int s = 1;
    while(s <= t){
        went[s] = true;
        if (!went[s + a[s]]) s += a[s];
        else break;
    }
    if (went[t]) printf("YES");
    else printf("NO");
    return 0;
}
