#include <stdio.h>
#include <iostream>
#include <vector>
#include <assert.h>
#include <set>
#include <map>
#include <unordered_map>
#include <cmath>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
#include <memory.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <climits>
#include <unordered_set>
// #include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// #define m 1000000006
#define M 1000000007
#define mp make_pair
#define pb push_back

int main() 
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n;
  ll t;
  cin>>n>>t;
  ll a[n];
  for(ll i=0; i<n; i++)
    cin>>a[i];
  ll ans=0, sum=0;
  for(ll i=0, j, prev=0; i<n; i++)
  {
    for(j=prev; j<n; j++)
    {
      sum+=a[j];
      if(sum>t)
      {
        sum-=a[j];
        prev=j;
        break;
      }
    }
    ans=max(ans,j-i);
    sum-=(a[i]);
  }
  cout<<ans<<endl;
} 
 