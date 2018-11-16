#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <queue>
#include <stack>
#include <utility>
#include <vector>
#include <string.h>
using namespace std;

#define vi vector<int>
#define pb push_back
#define ll long long
#define qi queue<int>
#define vll vector<long long>
#define si set<int>
#define msi multiset<int>
#define mi map<int,int>
#define pi pair<int,int>
#define frt(i,a,b) for(int i=a;i<b;i++)
#define fre(i,a,b) for(int i=a;i<=b;i++)
#define rew(i,a,b) for(int i=a;i>=b;i--)
#define bin(val,num) bitset<num>(val).to_string()
#define mod %
#define pow ^
#define xnode struct node

#define N 3000004

void solve()
{
   string s;
   int cnt = 0, c = 0;
   cin >> s;
   int n = (int) s.size();
   for (int i = 0; i < n - 1; ++i)
   {
      if(s[i] == 'B' && s[i + 1] == 'A')
         cnt++;
   }
   for (int i = 0; i < n - 1; ++i)
   {
      if(s[i] == 'A' && s[i + 1] == 'B')
      {
         c = 0;
         if(i > 0 && s[i - 1] == 'B')
            c++;
         if(i + 2 < n && s[i + 2] == 'A')
            c++;
         if(cnt - c > 0)
         {
            cout << "YES";
            return;
         }
      }
   }
   cout << "NO";
}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int t=1;
   while(t--)
   {
      solve();
   }
}

  
  