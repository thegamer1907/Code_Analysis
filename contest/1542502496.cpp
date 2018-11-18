#include <bits/stdc++.h>
#define lowbit(x) (x&(-x))
using namespace std;
typedef long long LL;
const int N = 1e5+7;
const int INF = 0x3f3f3f3f;
int n, m;
char str[3], s[107][7], tmp[7];
int main(int argc, char const *argv[]){
  scanf("%s%d", str, &n);
  for(int i=1; i<=n; i++){
    scanf("%s", s[i]);
  }
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++) {
      strcpy(tmp, s[i]), strcat(tmp, s[j]);
      if(strstr(tmp, str)){
        printf("YES\n");
        return 0;
      }
    }
  }
  printf("NO\n");
  return 0;
}