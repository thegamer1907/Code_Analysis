#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

const size_t max_string_length = 100000;
template<class T> struct is_cstr: std::false_type {}; template<int N> struct is_cstr<char[N]> : std::true_type {};
template<typename T> constexpr string formcomm(const T& a) {if constexpr (is_same_v<T, int> || is_same_v<T, size_t>) return "%d"; else if constexpr (is_same_v<T, long long int>) return "%lld"; else if constexpr (is_same_v<T, short int>) return "%hd"; else if constexpr (is_same_v<T, unsigned int>) return "%u"; else if constexpr (is_same_v<T, unsigned long long int>) return "%llu"; else if constexpr (is_same_v<T, unsigned short int>) return "%hu"; else if constexpr (is_same_v<T, char>) return "%c"; else {printf("Type %s non prévu\n", typeid(a).name()); terminate();}}
template<typename T> constexpr string formout(const T& a) {if constexpr (is_same_v<T, float>) return "%.16f"; else if constexpr (is_same_v<T, double>) return "%.16lf"; else if constexpr (is_same_v<T, long double>) return "%.16Lf"; else if constexpr (is_same_v<T, string>) return "%s"; else if constexpr (is_cstr<T>::value) return "%s"; else return formcomm(a);}
template<typename T> const T& addout(const T& a) {return a;} const char* addout(const string& a) {return a.c_str();} 
template<typename... Ts> void out(Ts&&... ts) {printf((formout(ts)+...).c_str(), addout(ts)...);}
template<typename It> void outs(It a, It b, string mid = " ", string fin = "\n") {if (a != b) {out(*a); ++a; for (; a != b; ++a) out (mid, *a);} out(fin);}
template<typename T> void outs(const T& l, string mid = " ", string fin = "\n") {outs(l.begin(), l.end(), mid, fin);}
template<typename T> constexpr string formin(const T& a) {if constexpr (is_same_v<T, float>) return "%f"; else if constexpr (is_same_v<T, double>) return "%lf"; else if constexpr (is_same_v<T, long double>) return "%Lf"; else if constexpr (is_same_v<T, string>) return "%s"; else if constexpr (is_cstr<T>::value) return "%s"; else return formcomm(a);}
template<typename T> constexpr int nstring(const T& a) {if constexpr (is_same_v<T, string>) return 1; else return 0;}
template<typename T> T* addin(T& a, char*& buf, string**& as) {return &a;} char* addin(string& a, char*& buf, string**& as) {char* ob = buf;buf+=max_string_length+1;*as = &a;++as;return ob;} 
template<typename... Ts> void in(Ts&&... ts) {int ns=(nstring(ts)+...);string* as[max(ns,1)];char buf[1+(max_string_length+1)*ns];char* b=buf;string** c=as;
 scanf((formin(ts)+...).c_str(), addin(ts, b, c)...); while (c > as) {--c; b-=max_string_length+1; **c = string(b);}}
template<typename It> void ins(It a, It b) {for (; a != b; ++a) in (*a);} template<typename T> void ins(T& l) {ins(l.begin(), l.end());} 
void inl(char* s) {scanf("%[^\n]", s);} void inl(string& s) {char buf[max_string_length+1]; inl(buf); s = string(buf);}
	
int main()
{
 int n;
 in(n);
 vector<vector<pair<int, int> > > gr(n);
 vector<vector<int> > d(n, vector<int>(n, 1000000));
 for (int i = 1; i < n; ++i)
 {
  int u, v, w;
  in(u, v, w);
  --u; --v;
  gr[u].emplace_back(v, w);
  gr[v].emplace_back(u, w);
  d[u][v] = min(d[u][v], w);
  d[v][u] = min(d[v][u], w);
 }
 vector<int> leafs;
 for (int i = 0; i < n; ++i)
 {
  d[i][i] = 0;
  for (int j = 0; j < i; ++j) for (int k = 0; k < i; ++k)
  {
   d[j][i] = min(d[j][i], d[j][k] + d[k][i]);
   d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
  }
  for (int j = 0; j < i; ++j) for (int k = 0; k < i; ++k) d[j][k] = min(d[j][k], d[j][i] + d[i][k]);
  if (gr[i].size() == 1) leafs.push_back(i);
 }
 int nl = leafs.size();
 int s;
 in(s);
 --s;
 int m;
 in(m);
 vector<vector<ll> > best(m, vector<ll>(nl, 0));
 for (int i = 1; i < m; ++i) for (int l = 0; l < nl; ++l)
 {
  vector<vector<ll> > gain(nl, vector<ll>(i+1, 0));
  for (int lv = 0; lv < nl; ++lv) for (int nv = 1; nv <= i; ++nv) gain[lv][nv] = best[i - nv][lv] + d[leafs[l]][leafs[lv]];
  vector<int> nbvol(nl, 0);
  ll mn = 1000000000000000000;
  for (int j = 0; j < i; ++j)
  { 
   ll mx = 0; int mxl;
   for (int u = 0; u < nl; ++u) if (gain[u][nbvol[u] + 1] > mx) {mx = gain[u][nbvol[u] + 1]; mxl = u;}
   ++nbvol[mxl];
   if (mx < mn) mn = mx;
  }
  best[i][l] = mn;
 }
 vector<int> x(m);
 ins(x);
 for (int i = 0; i < m; ++i) --x[i];
 ll mn = 1000000000000000000;
 for (auto& [sp, w]: gr[s])
 {
  int mp = 0;
  for (int i = 0; i < m; ++i) if (d[x[i]][sp] + w == d[x[i]][s]) ++mp;
  vector<vector<ll> > gain(nl, vector<ll>(mp+1, 0));
  for (int lv = 0; lv < nl; ++lv) for (int nv = 1; nv <= mp; ++nv)
  { 
   if (d[leafs[lv]][sp] + w == d[leafs[lv]][s]) gain[lv][nv] = best[m - nv][lv] + d[s][leafs[lv]];
   else gain[lv][nv] = -1; 
  }
  vector<int> nbvol(nl, 0);
  for (int j = 0; j < mp; ++j)
  { 
   ll mx = 0; int mxl;
   for (int u = 0; u < nl; ++u) if (gain[u][nbvol[u] + 1] > mx) {mx = gain[u][nbvol[u] + 1]; mxl = u;}
   ++nbvol[mxl];
   if (mx < mn) mn = mx;
  }
 }
 out(mn, "\n");
 return 0;
}
