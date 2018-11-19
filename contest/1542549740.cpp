#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long
#define ld long double
#define quik ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
int main()
{
    quik;
string pss,check; cin>>pss;
int n,x=0; cin>>n;
bool first=0,sec=0,all=0;
for (int i=0;i<n;i++){
    cin>>check;
    if (pss[0]==check[1] && first==0 ) {x++;  first=1;}
    if (pss[1]==check[0]&& sec==0) {x++; sec=1;}
    if (pss[0]==check[0]&&pss[1]==check[1]) {all=true; }

}
if (x>=2||all==true) cout<<"YES";
else cout<<"NO";
    return 0;
}
