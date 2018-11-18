#include<bits/stdc++.h>
using namespace std;
int main()
{
   bool l,r;
				int n;
				string mol,cp;
				while(cin>>mol){
				   cin>>n;
								l=r=false;
      while(n--){
         cin>>cp;
         if(cp==mol){l=r=true;}
         if(cp[0]==mol[1])l=true;
				      if(cp[1]==mol[0])r=true;
      }
								if(r&&l)puts("YES");
      else puts("NO");
   }
}