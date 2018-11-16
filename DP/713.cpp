#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin >> s;
  int n;
  cin >> n;
  vector < int > v(s.length(),0);
  // if(s[0]=='.')
  //     v[0]=1;
  //   else  
  //     v[0]=0;  
  for (int i=1;i<s.length();i++)
    if(s[i]==s[i-1])
      v[i]=v[i-1]+1;
    else  
      v[i]=v[i-1];  
  // for (int i=0;i<s.length();i++)
  //   cout << v[i] << " ";
  // cout << endl;  
  int x,y;    
  for (int i=0;i<n;i++){
    cin >> x >> y;
    cout << v[y-1]-v[x-1] << endl;


  }



  return 0;
}