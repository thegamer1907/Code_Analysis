#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

void morir()
{
  cout<<"YES"<<endl;
  exit(0);
}

int main()
{
  string s;
  cin>>s;
  int n;
  cin>>n;
  vector<string> v(n);
  for (int i=0;i<n;i++) {
    cin>>v[i];
    if (v[i]==s) morir();
  }
  for (int i=0;i<n;i++)
    for (int j=0;j<n;j++)
      if (v[i][1]==s[0] and v[j][0]==s[1])
	morir();
  cout<<"NO"<<endl;
}
