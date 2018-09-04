#include<bits/stdc++.h>
#define long long long
using namespace std;
const int N=1e5;
int n,k,ans;
string ss;
void slide(string s)
{
  int l=0,cnt=0;
  s.push_back('b');
  for(int i=0;i<n;i++)
  {
    if(s[i]=='b')cnt++;
    if(cnt>k)
    {
      cnt--;
      while(s[l]=='a')l++;
      l++;
    }
    ans=max(ans,i-l+1);
  }
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cin>>n>>k;
  cin>>ss;
  ans=min(n,k);
  slide(ss);
  for(int i=0;i<ss.size();i++)
  {
    if(ss[i]=='a')ss[i]='b';
    else ss[i]='a';
  }
  slide(ss);
  cout<<ans<<endl;
  return 0;
}
