#include <bits/stdc++.h>
#define mp(a,b)   make_pair(a,b)
#define ll        long long
#define mp(a,b)   make_pair(a,b)
#define si(n)     scanf("%d",&n)
#define sl(n)     scanf("%lld",&n)
#define pi(n)     printf("%d\n",n)
#define pl(n)     printf("%lld\n",n)
#define           newline cout << endl;
#define           ff first
#define           ss second
#define           pii pair<int, int>
#define           pll pair<ll, ll>
using namespace std;

template<typename S, typename T> 
ostream& operator<<(ostream& out,pair<S,T> const& p){out<<'('<<p.ff<<", "<<p.ss<<')';return out;}

template<typename T>
ostream& operator<<(ostream& out,vector<T> const& v){
int l=v.size();for(int i=0;i<l-1;i++)out<<v[i]<<' ';if(l>0)out<<v[l-1];return out;}

template<typename T>
void trace(const char* name, T&& arg1){cout<<name<<" : "<<arg1<<endl;}

template<typename T, typename... Args>
void trace(const char* names, T&& arg1, Args&&... args){
const char* comma = strchr(names + 1, ',');cout.write(names, comma-names)<<" : "<<arg1<<" | ";trace(comma+1,args...);}

int main(){
  //clock_t tStart = clock();
  int n,t;
  string s;
  cin >> n >> t >> s;
  while(t--){
    string temp = "";
    for(int i=0;i<n;i++){
      if(i==n-1){
        temp+=s[i];
        break;
      }
      if(s[i]=='B' && s[i+1]=='G'){
        temp+="GB";
        i++;
      }
      else{
        temp+=s[i];
      }
    }
    //cout << temp << endl;
    s=temp;
  }
  cout << s << endl;
  //printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
  return 0;
}