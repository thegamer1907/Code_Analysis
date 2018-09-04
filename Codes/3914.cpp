#include <bits/stdc++.h>

using namespace std;

typedef long long lint;

const int D = 3;
const int N = 110;

const char ing[] = {'B', 'S', 'C'};

char s[N];
map<char, lint> needed, has, price;

bool can(lint how_many, lint my_money) {
  lint money = 0;
  for (char i : ing) {
    money += max(0LL, needed[i] * how_many - has[i]) * price[i];
  }
  return money <= my_money;
}

int main() {
  scanf("%s", s);
  int len = strlen(s);
  for (int i = 0; i < len; ++i) {
    ++needed[s[i]];
  }

  for (char i : ing) {
    int q;
    scanf("%d", &q);
    has[i] = q;
  }

  for (char i : ing) {
    int p;
    scanf("%d", &p);
    price[i] = p;
  }

  lint my_money;
  scanf("%lld", &my_money);

  lint lo = 0, hi = 1e13, ans = 0;
  while (lo <= hi) {
    lint md = (lo + hi) / 2;
    
    if (can(md, my_money)) {
      ans = md;
      lo = md + 1;
    } else {
      hi = md - 1;
    }
  }

  return !printf("%lld\n", ans);
}