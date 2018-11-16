#include<bits/stdc++.h>
using namespace std;

#define fr first
#define sc second
#define memset(X,Y) memset(X,Y,sizeof X)
#define all(X) X.begin(),X.end()
#define SZ size()
#define mp make_pair
#define pb push_back
#define error(args...){vector<string> _v = split(#args,','); err(_v.begin(),args); }
vector <string> split(const string &s,char c){
    vector<string> v;
    stringstream ss(s);
    string x;
    while(getline(ss,x,c))
        v.emplace_back(x);
    return move(v);
}
void err(vector<string>:: iterator it){}
template<typename T,typename ... Args>
void err(vector<string>::iterator it, T a, Args ... args){
    cerr << it->substr((*it)[0] == ' ',it->length())
         << " = " << a <<"\n" ;
    err(++it,args...);
}
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
double pi=acos(-1);

const ll N =(1e6)+10,mod=1e9+7,K=30;
ll OO = 1e18;
int n;
vector<int> a(N);
int main(){
    cin>>n;
    int cnt=0;
    int ans=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]>a[i-1])cnt++;
        else cnt=1;
        ans=max(cnt,ans);
    }
    cout<<ans;
}
