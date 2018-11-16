#include <iostream>
#include <string>
#include <set>

using namespace std;


int compare(const void * x1, const void * x2)   
{
  return ( *(int*)x1 - *(int*)x2 );            
}
 

 int n;
 int t;
int main()
{
  int curPos = 1;
  int ans = 0;
  cin >> n >> t;
  int a[n+1];
  for (int i = 1; i < n; ++i)
  {
    cin >> a[i];
  }
  while(true){
    if(curPos == t)
      {
        ans = 1;
        break;
      }
    if(curPos > t)
      break;
    else {
      curPos = curPos+a[curPos];
    }
  }

  if(ans) cout << "YES";
  else cout << "NO";

return 0;
}

