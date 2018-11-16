#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

const size_t max_string_length = 100000;
template<class T> struct is_cstr: std::false_type {}; template<int N> struct is_cstr<char[N]> : std::true_type {};
template<typename T> constexpr string formcomm(const T& a) {if constexpr (is_same_v<T, int> || is_same_v<T, size_t>) return "%d"; else if constexpr (is_same_v<T, long long int>) return "%lld"; else if constexpr (is_same_v<T, short int>) return "%hd"; else if constexpr (is_same_v<T, unsigned int>) return "%u"; else if constexpr (is_same_v<T, unsigned long long int>) return "%llu"; else if constexpr (is_same_v<T, unsigned short int>) return "%hu"; else if constexpr (is_same_v<T, char>) return "%c"; else {printf("Type %s non pr�vu\n", typeid(a).name()); terminate();}}
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
	
int browse(const vector<vector<int> >& gr, const vector<int>& c, vector<bool>& visited, int i)
{
 visited[i] = true;
 int res = c[i];
 for (auto j: gr[i]) if (!visited[j])
 {
  int p = browse(gr, c, visited, j);
  if (p < res) res = p;
 }
 return res;
}

int main()
{
 int n, m;
 in(n, m);
 vector<int> c(n);
 ins(c);
 vector<vector<int> > gr(n);
 for (int i = 0; i < m; ++i)
 {
  int u, v;
  in(u, v);
  --u; --v;
  gr[u].push_back(v);
  gr[v].push_back(u);
 }
 vector<bool> visited(n, false);
 vector<pair<int, int> > cp;
 ll res = 0;
 for (int i = 0; i < n; ++i) if (!visited[i]) res += ll(browse(gr, c, visited, i));
 out(res, "\n"); 
 return 0;
}