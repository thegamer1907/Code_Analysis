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
   string str;
   cin >> str;
   map<int,int> ma;
   map<int,int> mb;
   int n = str.length();
   for(int i=0;i<n-1;i++)
   {
      if(str[i]=='B' && str[i+1]=='A')
      {
         mb[i]=1;
      }
      if(str[i]=='A' && str[i+1]=='B')
      {
         ma[i]=1;
      }

   }

   if(ma.size()>=2 && mb.size()>=2)
      cout << "YES" << endl;

   else if(ma.size()==0 || mb.size()==0)
      cout <<"NO " << endl;
   else
   {
      map<int,int> :: iterator it;
      
      if(mb.size()<2)
      {
         
         for(it = mb.begin();it!=mb.end();++it)
         {
            int x = it->first;
            ma.erase(x-1);
            ma.erase(x+1);

         }
         if(ma.size()>=1)
            cout << "YES" << endl;
         else
            cout << "NO " << endl;
      }
      else if(ma.size()<2)
      {
         for(it = ma.begin();it!=ma.end();++it)
         {
            int x = it->first;
            mb.erase(x-1);
            mb.erase(x+1);
         }
         if(mb.size()>=1)
            cout << "YES" << endl;
         else
            cout << "NO " << endl;
      }
   }
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

  
  