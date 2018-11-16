#include <bits/stdc++.h>

using namespace std;

int foo[100011];

int main()
{
  int n,m;
  scanf("%d %d",&n,&m);
  int a[100011];
  map<int,int> map;
  for(int i = 0; i < n; ++i) scanf("%d",&a[i]);
  for(int i = n-1; i >= 0; --i){
    foo[i] = (map[a[i]] == 0)+foo[i+1];
    map[a[i]] = 1;
  }
  while(m--){
    int x;
    scanf("%d",&x);
    //cerr << '>' << x << endl;
    printf("%d\n",foo[x-1]-foo[n]);
  }
}