# include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int count = s.size();
  int temp[count];
  temp[0] = 0;
  for (size_t i = 1; i < count; i++) {
       if(s[i] == s[i-1]){
         temp[i] = temp[i-1] + 1;
       }
       else
       temp[i] = 0;
  }

    int result[count];
    result[0] = 0;
  for (size_t i = 1; i < count; i++) {
    if(temp[i] == 0){
       result[i] = result[i-1];
    }
    else
  result[i] = result[i-1] + 1;
  }
  int t;
  cin>>t;
  while(t--){
     int left, right;
     cin>>left>>right;
     cout<<result[right-1] - result[left-1]<<endl;
  }
  return 0;
}
