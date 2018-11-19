#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cassert>
#include <set>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

#define PROBLEM "b"

const int TOTAL=12*60*60;

int htoi(int h, int m, int s) {
  if (h==12)
    h=0;
  return h*(TOTAL/12)+m*(TOTAL/12/60)+s*(TOTAL/12/60/60);
}

int mtoi(int m, int s) {
  return m*(TOTAL/60)+s*(TOTAL/60/60);
}

int stoi(int s) {
  return s*(TOTAL/60);
}

int main() {
#ifdef LAPTOP
  freopen(PROBLEM".in", "r", stdin);
#endif
  int h, m, s, t1, t2, f, b, i;
  while (scanf("%d %d %d %d %d", &h, &m, &s, &t1, &t2)==5) {
    h=htoi(h, m, s);
    m=mtoi(m, s);
    s=stoi(s);
    t1=htoi(t1, 0, 0);
    t2=htoi(t2, 0, 0);
    set<int> fw;
    set<int> bw;
    for (i=t1; i!=t2; i=(i+1)%TOTAL)
      fw.insert(i);
    for (i=t2; i!=t1; i=(i+1)%TOTAL)
      bw.insert(i);
    f=fw.count(h)+fw.count(m)+fw.count(s);
    b=bw.count(h)+bw.count(m)+bw.count(s);
    puts(f==0 || b==0 ? "YES" : "NO");
  }
  return 0;
}
