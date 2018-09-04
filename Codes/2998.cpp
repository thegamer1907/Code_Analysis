#include <bits/stdc++.h>

using namespace std;

int cnt, n, a[1000001];
string s;

void KMP_Algo(string s){
   int i=1, j=0;
   while(i<n){
      if(s[i]==s[j])
         a[i++]=++j;
      else
         if(j) j=a[j-1];
         else a[i++]=0;
   }
}

int main(){

   cin >> s;
   n=s.size();

   KMP_Algo(s);
   int m=a[n-1];

   if(!m) goto End;

   for(int i=0; i<n; i++)
      if(a[i]==m) cnt++;

   if(cnt>1){
      cout << s.substr(0, m);
      return 0;
   }

   cnt=0;
   s=s.substr(n-m);

   n=m;
   KMP_Algo(s);

   if(a[n-1]>=1){
      cout << s.substr(0, a[n-1]);
      return 0;
   }

End:   cout << "Just a legend";

 return 0;
}
