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
 vector<string> s(n);
 ins(s);
 vector<vector<vector<bool> > > ps;
 vector<int> mx(n, 0);
 for (int i = 0; i < n; ++i)
 {
  ps.emplace_back();
  for (int j = 0; j < 10; ++j)
  {
   int msk = ~(1 << j);
   ps[i].push_back(vector<bool>(1 << (j+1), false));
   if (s[i].size() > j)
   {
    int r = 0;
    for (int u = 0; u < j; ++u) {r <<= 1; if (s[i][u] == '1') ++r;}
    for (int u = j; u < s[i].size(); ++u) {r <<= 1; if (s[i][u] == '1') ++r; ps[i][j][r] = true; r &= msk;}
    int o;
    for (o = 0; o < (1 << (j+1)); ++o) if (!ps[i][j][o]) break;
    if (o == (1 << (j+1))) mx[i] = j+1;
   }
  }
 } 
 vector<string> s1(n), s2(n);
 for (int i = 0; i < n; ++i)
 {
  if (s[i].size() <= 10) s1[i] = s2[i] = s[i];
  else {s1[i] = s[i].substr(0,10); s2[i] = s[i].substr(s[i].size() - 10);}
 }
 int m;
 in(m);
 for (int i = n; i < n+m; ++i)
 {
  int a, b;
  in(a, b);
  --a; --b;
  string db = s1[a] + s1[b];
  if (db.size() <= 10) s1.push_back(db); else s1.push_back(db.substr(0, 10));
  string fn = s2[a] + s2[b];
  if (fn.size() <= 10) s2.push_back(fn); else s2.push_back(fn.substr(fn.size() - 10));
  string st = s2[a] + s1[b];
  ps.emplace_back();
  mx.emplace_back(0);
  for (int j = 0; j < 10; ++j)
  {
   int msk = ~(1 << j);
   ps[i].push_back(vector<bool>(1 << (j+1), false));
   for (int o = 0; o < (1 << (j+1)); ++o) ps[i][j][o] = ps[a][j][o] || ps[b][j][o];
   if (st.size() > j)
   {
    int r = 0;
    for (int u = 0; u < j; ++u) {r <<= 1; if (st[u] == '1') ++r;}
    for (int u = j; u < st.size(); ++u) {r <<= 1; if (st[u] == '1') ++r; ps[i][j][r] = true; r &= msk;}
    int o;
    for (o = 0; o < (1 << (j+1)); ++o) if (!ps[i][j][o]) break;
    if (o == (1 << (j+1))) mx[i] = j+1;
   }
  }
  out(mx[i], "\n");
 }
 return 0;
}
