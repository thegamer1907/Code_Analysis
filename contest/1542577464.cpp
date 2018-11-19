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

#define PROBLEM "d"

#define SIZE(__c) (int)(__c).size()

int makeNumber(const string &ss, int p, int n) {
  int j, m=0;
  for (j=0; j<n; j++)
    m=2*m+(ss[p+j]-'0');
  return m;
}

struct String {
  string pf, sf, wh;
  set<int> st[10];
  String(const string &bf) {
    pf="";
    sf="";
    wh=bf;
    for (int i=1; i<=10; i++)
      for (int j=0; j<SIZE(bf)-i+1; j++)
        st[i-1].insert(makeNumber(bf, j, i));
  }
  String(const String &s1, const String &s2) {
    const string &z1=s1.getSuffix();
    const string &z2=s2.getPrefix();
    string zz=z1+z2;
    for (int i=1; i<=10; i++) {
      st[i-1]=s1.st[i-1];
      st[i-1].insert(s2.st[i-1].begin(), s2.st[i-1].end());
    }
    for (int i=2; i<=10; i++)
      for (int j=0; j<SIZE(zz)-i+1; j++)
        if (j<SIZE(z1) && j+i-1>=SIZE(z1))
          st[i-1].insert(makeNumber(zz, j, i));
    if (s1.wh=="")
      pf=s1.pf;
    else if (s2.wh=="")
      pf=s1.wh+s2.pf;
    else
      pf=s1.wh+s2.wh;
    if (s2.wh=="")
      sf=s2.sf;
    else if (s1.wh=="")
      sf=s1.sf+s2.wh;
    else
      sf=s1.wh+s2.wh;
    if (s1.wh!="" && s2.wh!="") {
      wh=s1.wh+s2.wh;
      if (SIZE(wh)>30)
        wh="";
      else {
        pf="";
        sf="";
      }
    }
    else
      wh="";
    if (SIZE(pf)>30)
      pf=pf.substr(0, 30);
    if (SIZE(sf)>30)
      sf=sf.substr(SIZE(sf)-30);
  }
  const string &getPrefix() const {
    return pf=="" ? wh : pf;
  }
  const string &getSuffix() const {
    return sf=="" ? wh : sf;
  }
  int getAnswer() const {
    for (int i=10; i>=1; i--)
      if (SIZE(st[i-1])==(1<<i))
        return i;
    return 0;
  }
};

int main() {
#ifdef LAPTOP
  freopen(PROBLEM".in", "r", stdin);
#endif
  char bf[108];
  int i, a, b, S, Q;
  vector<String> ss;
  scanf("%d", &S);
  for (i=0; i<S; i++) {
    scanf("%s", bf);
    ss.push_back(String(bf));
  }
  scanf("%d", &Q);
  while (Q--) {
    scanf("%d %d", &a, &b);
    ss.push_back(String(ss[a-1], ss[b-1]));
    printf("%d\n", ss.back().getAnswer());
  }
  return 0;
}
