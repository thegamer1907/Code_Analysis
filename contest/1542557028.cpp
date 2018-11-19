#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(void){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  #endif
  string s;
  cin >> s;
  map<string,int> mp;
  int n;
  cin >> n;
  std::vector<string> v;
  for(int i = 0;i<n;i++)
  {
    string a;
    cin >> a;
    v.push_back(a);
    if(v[i][0] == s[0] && v[i][1] == s[1])
    {
      cout << "YES\n";
      return 0;
    }
  }
  for(int i = 0;i<n;i++)
  {
    for(int j = 0;j<n;j++)
    {
      if(v[i][0] == s[1] && v[j][1] == s[0])
      {
        cout << "YES\n";
        return 0;
      }
    }
  }
  cout << "NO\n";

  return 0; 
}
