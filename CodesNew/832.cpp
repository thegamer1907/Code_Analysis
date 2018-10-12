//Euzibillahiminesseytanirracim Bismillahirrahmanirrahim

#include <iostream>
#include <map>
using namespace std;
int n,m,q,i,w;
string s[1001],ss[1001];
map<string,int>c;
int main()
{
	cin>>n>>m;
	for (i=1;i<=n;i++) cin>>s[i], c[s[i]]++;
	for (i=1;i<=m;i++) {cin>>ss[i]; if (c[ss[i]]!=0) q++;}
	w=q/2+q%2;
	if (n-q+w>m-w) cout<<"YES";
	else cout<<"NO"; 
}

/*
        ///      /////////          //////
     /// ///          ///        ///     //
    ///   ///        ///       ///
   //////////       ///       ///
  ///     ///      ///        ///
 ///      ///     ///          ///     //
///       ////   /////////        /////
                                   //
*/

