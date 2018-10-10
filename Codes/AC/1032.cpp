#include <bits/stdc++.h>

const int MAX_N = 100000;
char str[MAX_N];

char getch(FILE *fin) {
  char ch = fgetc(fin);
  while(!isalpha(ch))
    ch = fgetc(fin);
  return ch;
}

int fr[2];
bool check(int n, int s, int k) {
  fr[0] = fr[1] = 0;
  for(int i = 0; i < n; ++i) {
    fr[str[i] - 'a']++;
    if(i >= s)
      fr[str[i - s] - 'a']--;
    if(i >= s - 1 && (fr[0] <= k || fr[1] <= k))
      return true;
  }
  return false;
}

int main() {
  int n, k, st, dr;
  scanf("%d%d", &n, &k);
  for(int i = 0; i < n; ++i)
    str[i] = getch(stdin);
  st = 1;
  dr = n + 1;
  while(dr - st > 1) {
    int mid = (st + dr) / 2;
    if(check(n, mid, k))
      st = mid;
    else
      dr = mid;
  }
  printf("%d", st);
  return 0;
}
