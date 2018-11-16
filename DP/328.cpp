#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
      vector<ll > b, g;
      ll n , m ;
      cin >> n;
      for(ll i=0;i<n ;++i){
                  ll x;
                  cin>>x;
            b.push_back(x);
      }
      cin >> m;
       for(ll i=0;i<m ;++i){
                  ll x;
                  cin>>x;
            g.push_back(x);
      }
      sort(b.begin() , b.end());
      sort(g.begin() , g.end());
      ll res = 0;
      ll p1=0 , p2=0;
      while(true){
            if(p1==b.size() || p2==g.size()) break;
            //cout<<"hello\n";
            ll diff = abs(b[p1]-g[p2]);
            if(diff<=1){
                  ++res;
                  ++p1;
                  ++p2;
            }
            else if(b[p1]<g[p2]){
                  ++p1;
            }
            else {
                  ++p2;
            }
      }
      cout<<res<<endl;
      cout.flush();
      return 0;

}
