#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
typedef long long ll;

const int N = 1e3;


int main(){
  ios_base::sync_with_stdio(0); cin.tie(0);
  string n;
  string s;
  cin >> s;
  int t;
  cin >> t;
  int c = 0;
  int d = 0;
  
  
  for(int i = 0; i < t; i++){
    cin >> n;
    if(n == s){
      c = 1;
      d = 1;
    }
    if(n[1] == s[0]){
      c++;
    } 
    if(n[0] == s[1]){
      d++;
    }
  }
  
  if(c && d){
    cout << "YES"<< endl;
  } else {
    cout << "NO" << endl;
  }
  
  return 0;
}
