#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  int n,t;
  ll sum = 1;
  cin >> n >> t;
  int arr[n];
  for (int i = 1; i <= n-1; ++i)
  {
    cin >> arr[i];
  }
  for(int i = 1;sum < t;i++)
  {
      sum = sum + arr[sum];
  }  
  if(sum == t)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }
 return 0; 
}