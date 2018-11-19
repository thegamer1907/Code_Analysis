//Be name Khoda

#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  string s,t[100];
  int n;
  cin>>s;
  cin>>n;
  for(int i=0;i<n;i++)
    cin>>t[i];
  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
      if((t[i][1] == s[0] and t[j][0] == s[1]) or (t[i][0] == s[0] and t[i][1] == s[1])){
	cout<<"YES";
	return 0;
      }
  cout<<"NO";
  return 0;
}
