#include <bits/stdc++.h>
using namespace std;
#define clr(x , v) memset(x , v , sizeof(x))
#define debug(x) cerr << "line" << __LINE__ << ": " << #x << " = " << (x) << endl
#define rep(i, begin, end) for(register int i = begin ; begin > end ? i >= end : i <= end ; begin > end ? --i : ++i)
#define gt() (p1 == p2 && (p2 = (p1 = buf) + fread(buf , 1 , 100000 , stdin) , p1 == p2) ? EOF : *p1++)
#define INF 1000000007
#define DOUBLEFORMAT "%f"
#define      pb      push_back
#define   whole(a)   a.begin(), a.end()

#define argmax(a) (max_element(whole(a)) - (a).begin())
#define argmin(a) (min_element(whole(a)) - (a).begin())
#define tthti  template<typename Head, typename... Tail> inline
#define ttt12i template<typename T1, typename T2> inline
#define ttti   template<typename T> inline
#define error(args...)  {err(split(#args,',').begin(),args);}
#define read1 read_one()
template <class Head,  class... Tail> inline void writeln (Head head,  Tail... tail);
template <class Head,  class... Tail> inline void writeln2(Head head,  Tail... tail);
template <class Head,  class... Tail> inline void readln  (Head& head, Tail&... tail);
template <class Head,  class... Tail> inline void read    (Head& head, Tail&... tail);
template <class Head,  class... Tail> inline void print   (Head& head, Tail&... tail);
template <class Type1, class Type2>   inline void print   (pair<Type1, Type2>& p);
template <class Type1, class Type2>   inline void print_no_space(pair<Type1, Type2>& p);
template <class Head,  class... Tail> inline void print_no_space(Head& head, Tail&... tail);
void inline writeln() {printf("\n");}
void inline writeln2(){printf("\n");}
void inline readln()  {}
void err(vector<string>::iterator it){++it;}
tthti void err(vector<string>::iterator it,Head head,Tail...tail){writeln((*it).substr((*it)[0]==' ',INF),"=",head);err(++it, tail...);}
vector<string>split(const string&s,char c){vector<string>v;stringstream ss(s);string x;while(getline(ss,x,c))v.pb(x);return move(v);}

static char buf[100000] , *p1 = buf , *p2 = buf;
static const int MAXN = 1e5 + 10;
static const int OO = 0x3fffffff;
typedef int ret_type;
typedef long long ll;
ret_type read_one(){
    ret_type ret = 0; char ch = gt();
    while(ch < '0' || ch > '9') ch = gt();
    while(ch >= '0' && ch <= '9') ret = ret * 10 + ch - '0' , ch = gt();
    return ret;
}
/*-------------------------------*/

char s[MAXN];
int a[MAXN];
int dp[MAXN][9];
int pre[MAXN][9];
int selected[MAXN][8];
void out(int k , int now) {
    if(k == 1) {
        if(selected[k][now]) {
            printf("%d" , a[k]);
        } return ;
    }out(k - 1 , pre[k][now]);
    if(selected[k][now]) {
        printf("%d" , a[k]);
    }
}
int main(){
#ifdef ONLINE_JUDGE
#else
    freopen("in.data","r",stdin);
    //freopen("out.data","w",stdout);
#endif
    scanf(" %s" , s + 1);
    int n = strlen(s + 1);
    rep(i , 1 , n) {
        if(s[i] == '0' || s[i] == '8') {
            return printf("YES\n%c\n" , s[i]) * 0;
        } a[i] = s[i] - '0';
        dp[i][a[i] % 8] = 1;
        selected[i][a[i] % 8] = 1;
    } rep(i , 1 , n) {
        rep(j , 0 , 7) {
            if(dp[i - 1][j]) {
                dp[i][j] = 1;
                pre[i][j] = j;
                selected[i][j] = 0;
                dp[i][(j * 10 + a[i]) % 8] = 1;
                pre[i][(j * 10 + a[i]) % 8] = j;
                selected[i][(j * 10 + a[i]) % 8] = 1;
            }
        }
    }rep(i , 1 , n) {
        if(dp[i][0]) {
            puts("YES");
            out(i , 0);
            puts("");
            return 0;
        }
    }
    puts("NO");
    return 0;
}






inline void print(double a){printf(" " DOUBLEFORMAT,a);}
inline void print(int a){printf(" %d",a);}
inline void print(const char* a){printf(" %s",a);}
inline void print(string a){printf(" %s",a.c_str());}
inline void print(long long a){printf(" %lld",a);}
inline void print(long a){printf(" %ld",a);}
inline void print(unsigned long a){printf(" %ld",a);}
inline void print(unsigned int a){printf(" %d",a);}
inline void print(char a){printf(" %c",a);}
inline void print_no_space(double a){printf(DOUBLEFORMAT, a);}
inline void print_no_space(int a){printf("%d", a);}
inline void print_no_space(const char* a){printf("%s", a);}
inline void print_no_space(string a){printf("%s", a.c_str());}
inline void print_no_space(long a){printf("%ld", a);}
inline void print_no_space(long long a){printf("%lld", a);}
inline void print_no_space(unsigned long a){printf("%ld", a);}
inline void print_no_space(unsigned int a){printf("%d", a);}
inline void print_no_space(char a){printf("%c", a);}
template<class Type> inline void print(vector<Type>& a){for(register int i=0;i<(int)a.size();++i)print(a[i]);}
template<class Type> inline void print(vector<vector<Type> >& a){if(a.size())(a.size()==1)?print(a[0]):writeln2(a[0]);for(register int i=1;i<(int)a.size()-1;++i)writeln2(a[i]);if(a.size()>=2)print_no_space(a.back());}
template<class Type> inline void print_no_space(vector<Type>& a){if(a.size())print_no_space(a[0]);for(register int i=1;i<(int)a.size();++i)print(a[i]);}
template<class Type> inline void print_no_space(vector<vector<Type> >&a){for(register int i=0;i<(int)a.size()-1;++i)writeln(a[i]);if(a.size())print_no_space(a.back());}
template<class Type1, class Type2> inline void print_no_space(pair<Type1, Type2>&a){print_no_space(a.first); writeln2(a.second);}
template<class Type1, class Type2> inline void print(pair<Type1, Type2>& a)        {print_no_space(a.first); writeln2(a.second);}
template <class Head, class... Tail> inline void writeln2(Head head, Tail... tail){print(head);writeln2(tail...);}
template <class Head, class... Tail> inline void writeln(Head head, Tail... tail){print_no_space(head);writeln2(tail...);}
inline void read(double &a){scanf("%lf",&a);}
inline void read(int &a){scanf("%d",&a);}
inline void read(string &a){cin>>a;}
inline void read(long long &a){scanf("%lld",&a);}
inline void read(char &a){scanf("%c",&a);}
template<class Type1, class Type2> inline void read(pair<Type1, Type2>&a){readln(a.first, a.second);}
template<class Type> inline void read(vector<Type> &a){if(a.size()==0){int n;read(n);a.resize(n);}for(register int i=0;i<(int)a.size();++i)readln(a[i]);}
template <class Head,class... Tail> inline void readln(Head& head,Tail&... tail){read(head);readln(tail...);}

