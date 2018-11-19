#include<bits/stdc++.h>
using namespace std;
const int N =1e6+5;
const long long M = (long long)1e9+7;
#define     ll      long long
int Int() {
    int x;
    scanf("%d",&x);
    return x;
}
ll Long() {
    ll x;
    scanf("%I64d",&x);
    return x;
}
void Char(char* ch) {
    scanf("%s",ch);
}
template<typename t>t abs(t a) {
    if(a>=0)return a;
    return -a;
}
///error///
#define error(args...) {vector<string>_v=split(#args,',');err(_v.begin(),args);cout<<endl;}
vector<string> split(const string &s,char c) {
    vector<string>v;
    stringstream ss(s);
    string x;
    while(getline(ss,x,c))
        v.emplace_back(x);
    return move(v);
}

void err(vector<string>::iterator it) {}
template<typename T,typename... Args>
void err(vector<string>::iterator it,T a,Args...args) {
    cout<<it->substr((*it)[0]==' ',it->length())<< " = " << a << " ";
    err(++it,args...);
}
///This DEBUGGER-tool need c++11///
#define     Int         Int()
#define     Long        Long()
#define     pii         pair<int,int>
#define     vi          vector<int>
#define     vl          vector<ll>
#define     pb          push_back
#define     all(x)      x.begin(),x.end()
#define     LB          lower_bound
#define     UB          upper_bound
#define     Mx(a,b)     (a>b)?a:b
#define     Mn(a,b)     (a<b)?a:b
#define     mem(a,b)    memset(a,b,sizeof a)

int a[N];
int main() {
    string s;
    cin>>s;
    int n = Int ,on =0 ,two = 0;
    while(n--){
        string d ;
        cin>>d;
        if(s == d )return puts("YES"),0;
        if(d[0]==s[1] and d[1] == s[0])return puts("YES"),0;
        if(d[0]==s[1])on=1;
        if(d[1] == s[0])two = 1;
    }
    if(on and two )puts("YES");
    else puts("NO");

}


