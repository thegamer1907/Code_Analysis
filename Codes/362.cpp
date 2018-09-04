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
template<typename T> constexpr int memneed(const T& a) {if constexpr (is_same_v<T, string>) return max_string_length+1; else return 0;}
template<typename T> T* addin(T& a, char* buf) {return &a;} char* addin(string& a, char*& buf) {char* ob = buf; buf+=max_string_length+1; return ob;} 
template<typename T> void postin(T& a, char* buf) {} void postin(string& a, char*& buf) {a = string(buf); buf+=max_string_length+1;} 
template<typename... Ts> void in(Ts&&... ts) {char buf[(memneed(ts)+...)]; char* b = buf; scanf((formin(ts)+...).c_str(), addin(ts, b)...); b = buf; (postin(ts, b), ...);}
template<typename It> void ins(It a, It b) {for (; a != b; ++a) in (*a);} template<typename T> void ins(T& l) {ins(l.begin(), l.end());} 
void inl(char* s) {scanf("%[^\n]", s);} void inl(string& s) {char buf[memneed(s)]; inl(buf); s = string(buf);}

ll sc(ll a)
{
 ll s = 0;
 while (a > 0) {s += (a%10); a /= 10;}
 return s;
}

ll nxsl10(ll a)
{
 ll s = sc(a);
 if (s < 10) return a+1;
 ll m = 10;
 while (a%m == 0) m *= 10;
 return a + m - a%m;
}

int main()
{
 int k;
 in(k);
 ll a = 1;
 for (int i = 1; i < k; ++i) a = nxsl10(a);
 out(a, 10-sc(a), "\n");
 return 0;
}
