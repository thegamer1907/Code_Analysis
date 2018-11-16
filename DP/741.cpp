#include <iostream>
#include <string>

using namespace std;

const int n = 400005;
int tree[n], arr[n];

void build(int node, int start, int end)
{
  if(start == end)
  {
    tree[node] = arr[start];
  }
  
  else
  {
   int mid = (start + end) / 2;
   build(2*node, start, mid);
   build(2*node+1, mid+1, end);
   tree[node] = tree[2*node] + tree[2*node+1];
  }
  
  return;
}

int query(int node, int start, int end, int l, int r)
{
  if(r < start || l > end)
  {
    return 0;
  }
  
  else
  {
    if(l <= start && end <= r)
    {
      return tree[node];
    }
    
    else
    {
      int mid = (start + end)/2;
      int p1 = query(2*node, start, mid, l, r);
      int p2 = query(2*node+1, mid+1, end, l, r);
      return p1 + p2;
    }

  }
  
}

int main() 
{
  int m, l, r, size;
  string s;
  
  cin >> s;
  size = s.size();
  
  for(int i = 0; i < size-1; i++)
  {
    if(s[i] == s[i+1])
    {
      arr[i] = 1;
    }
  }
  
  cin >> m;
  build(1, 0, size-2);
  
  for(int i = 0; i < m; i++)
  {
    cin >> l >> r;
    if(l-1 > r-2)
    {
      cout << query(1, 0, size - 2, l-1, r-1) << endl;
    }
    else
    {
      cout << query(1, 0, size - 2, l-1, r-2) << endl;
    }
  }
  return 0;
}