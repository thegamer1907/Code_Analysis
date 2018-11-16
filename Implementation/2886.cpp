#include<bits/stdc++.h>

using namespace std;

const int maxi=10000;
int c[maxi];
string s;
char t[maxi];
int main()
{
   gets(t);

   s.assign(t);
   int n=s.size();

   for (int i=0;i<n;i++)
    c[s[i]]++;

   int ans=0;

   for (int i='a';i<='z';i++)
    if (c[i]) ans++;

   cout<<ans<<"\n";

    return 0;
}
