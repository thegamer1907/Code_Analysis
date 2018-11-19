#include <bits/stdc++.h>
#define INF INT_MAX
#define pii pair<int, int>

using namespace std;

int const N = 10000;

int main()
{
   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

   string x;
   vector <  string > y;
   int n; cin>>x>>n;

   bool ans = 0;
   for( int i =0; i<n; i++ ){
        string s; cin>>s;
        y.push_back(s);


        if(s == x) ans =1;
   }


   for(int i =0; i<y.size(); i++){
    for(int j =0; j<y.size(); j++){
        if( y[i][0] == x[1] and y[j][1] == x[0] ) ans =1;
        if( y[i][1] == x[0] and y[j][0] == x[1] ) ans =1;

    }
   }

   ans ? cout<<"YES\n" : cout<<"NO\n";

    return 0;
}
