#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,t;
  std::cin >> n >> t;
  vector<int> A(n-1,0);
  for(int i=0;i<n-1;i++)
  {
    std::cin >> A[i];
  }
  int node=1;
  while(node!=n && node!=t)
  {
    node+=A[node-1];
  }
  if(node==n && node!=t)
  {
    std::cout << "NO\n";
  }
  else
  {
    std::cout << "YES\n";
  }
}
