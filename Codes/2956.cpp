//  Created by Vignesh Manoharan

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <numeric>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> ii;
typedef pair<ll,ll> pll;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<vii> vvii;

const int INF = 1000000000;
const ll LINF = 1e17;
const double PI =3.141592653589793238;
const ll lmod = 1000000007l;
const int mod=1000000007;
const double eps = 0.000001;
#pragma unused(INF, LINF, PI, lmod, mod, eps)

#define F(i,a,n) for(int i=(a);i<(n);i++)

template<typename T,typename TT> ostream& operator<<(ostream &s,pair<T,TT> t) {return s<<"("<<t.first<<","<<t.second<<")";}
template<typename T> ostream& operator<<(ostream &s,vector<T> t){
    for(int i=0;i<(t).size();i++)s<<t[i]<<((i<(t).size()-1)?" ":"");return s; }
template<typename T> ostream& operator<<(ostream &s,set<T> t){for(T x:t) s<<x<<" ";return s; }
template<typename T> istream& operator>>(istream &s,vector<T> &t){
    for(int _i=0;_i<t.size();_i++) s>>t[_i];return s; }

#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()

vi prefix_func(string s){
    int n = s.size();
    vi pi(n);
    F(i,1,n){
        int j=pi[i-1];
        while(j>0 && s[i]!=s[j]){
            j=pi[j-1];
        }
        if(s[i]==s[j]) j++;
        pi[i]=j;
    }
    return pi;
}

int str_search(string s1, string s2){
    // reutrn end of second occurence
    int n=s1.size(),m=s2.size();
    string s=s1+"#"+s2;
    vi ps = prefix_func(s);
    int fi=0;
    F(i,n+1,n+m+1) if(ps[i]==n) {
        if(!fi) fi=1;
        else return i-(n+1);
    }
    return -1;
}

int main(int argc, const char * argv[]) {
    #ifdef LOCAL_TEST
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
    #endif

    string s;
    cin>>s;

    vi p = prefix_func(s);
    int n=s.size();
    int id=p[n-1];
    int got=0;
    while(id>0){
        string s1=s.substr(0,id);
        int idx=str_search(s1,s);
        if(idx!=n-1){
            got=id;
            break;
        }
        //cout<<s1<<"\n"<<idx<<"\n";
        id=p[id-1];
    }
    //cout<<p<<"\n";
    if(got)
        cout<<s.substr(0,got);
    else
        cout<<"Just a legend";
}


