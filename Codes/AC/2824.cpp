/* code by AbhiTaker
         ____
        /    \
       /  __  \              _______      __       _   _    _____    _____
      /  /  \  \            |__   __|    /  \     | | / /  |  ___|  |  _  \
     /  /____\  \     ___      | |      / /\ \    | |/ /   | |__    | |_)  )
    /  /______\  \   |___|     | |     / /__\ \   |   /    |  __|   |    _/
   /  /        \  \            | |    / /----\ \  | |\ \   | |___   | |\ \
  /__/          \__\           |_|   /_/      \_\ |_| \_\  |_____|  |_| \_\
*/
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef unsigned long long ull;
#define M 1000000007
#define N 1000016
#define ff first.first
#define fs first.second
#define sf second.first
#define ss second.second
#define f first
#define s second
#define inf 9000000000000000000
ll pre[N];
unordered_set<ll> myset;

int main()
{
   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   ll i=0,j=0;
   string s;
   cin>>s;
   pre[0] = 0;
   for(i=1; i<s.size(); i++)
   {
       while(1)
       {
          if(s[i]==s[j])
          {
              j++;
              pre[i] = j;
              break;
          }
          if(j==0)
            break;
          j = pre[j-1];
       }
       if(j==-1)
        j=0;

       if(i!=s.size()-1 && pre[i]!=0)
        myset.insert(pre[i]);
   }

   if(myset.find(pre[s.size()-1])!=myset.end())
   {
       for(i=0; i<pre[s.size()-1]; i++)
        cout<<s[i];
   }
   else if(myset.find(pre[pre[s.size()-1]-1])!=myset.end())
    {
       for(i=0; i<pre[pre[s.size()-1]-1]; i++)
        cout<<s[i];
    }
   else
    cout<<"Just a legend";

    return 0;
}
