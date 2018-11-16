#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> replace(const vector<int>& a,const vector<int>& b);
bool increasing(const vector<int>& a);

int main(){
  int a_size,b_size;
  while(cin>>a_size>>b_size){
    vector<int> a(a_size),b(b_size);
    for(int i=0;i<a.size();i++)
      cin>>a[i];
    for(int i=0;i<b.size();i++)
      cin>>b[i];
    sort(b.begin(),b.end());
    vector<int> ret=replace(a,b);
    reverse(b.begin(),b.end());
    vector<int> ret2=replace(a,b);
    if(!increasing(ret) || !increasing(ret2))
      cout<<"Yes\n";
    else
      cout<<"No\n";
  }
}

vector<int> replace(const vector<int>& a,const vector<int>& b);

bool increasing(const vector<int>& a){
  vector<int> c=a;
  sort(c.begin(),c.end());
  return a==c;
}

vector<int> replace(const vector<int>& a,const vector<int>& b){
  vector<int> ret=a;
  int bp=0;
  for(int i=0;i<ret.size();i++)
    if(ret[i]==0)
      ret[i]=b[bp++];
  return ret;
}
