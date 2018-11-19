#include <bits/stdc++.h>

using namespace std;

const double eps=1e-8;
map<char,bool> fr,ba;
string in;
string tmp;
int main(){
  cin>>in;
  int N;
  cin>>N;
  bool flag=0;
  while(N--){
    cin>>tmp;
    fr[tmp[0]]=1;
    ba[tmp[1]]=1;
    flag|=tmp==in;
  }
  if((ba[in[0]]&&fr[in[1]])||flag){
    puts("YES");
  }
  else {
    puts("NO");
  }
  
}
