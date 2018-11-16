#include<bits/stdc++.h>
#define lmid l,mid,rt<<1
#define rmid mid+1,r,rt<<1|1
using namespace std;
int s[105], t[105];
int main() {
     int n, m;
     scanf("%d%d", &n, &m);
     for(int i = 0; i < n; i++)
          scanf("%d", &s[i]);
     for(int i = 0; i < m; i++)
          scanf("%d", &t[i]);
     if(m >= 2) {
          printf("Yes\n");
          return 0;
     }
     for(int i = 0; i < n; i++) {
          if(s[i] == 0)s[i] = t[0];
     }
     bool flag = false;
     for(int i = 1; i < n; i++) {
          if(s[i] < s[i - 1]) {
               flag = true;
               break;
          }
     }
     if(flag)printf("Yes\n");
     else printf("No\n");
     return 0;
}

